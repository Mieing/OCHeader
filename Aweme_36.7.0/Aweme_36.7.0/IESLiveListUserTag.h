@class NSString;

@interface IESLiveListUserTag : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long textSize;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) long long bgRadius;

+ (id)descriptor;

@end
