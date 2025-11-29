@class NSString, HTSLiveText;

@interface HTSLiveSuffixText : IESLivePBBaseMessage

@property (nonatomic) long long bizType;
@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;
@property (copy, nonatomic) NSString *tags;

+ (id)descriptor;

@end
