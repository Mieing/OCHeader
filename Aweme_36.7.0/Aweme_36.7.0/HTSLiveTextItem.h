@class HTSLiveText;

@interface HTSLiveTextItem : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end
