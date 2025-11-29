@class HTSLiveText;

@interface HTSLiveCallToLinkmicContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveText *text;
@property (nonatomic) BOOL hasText;

+ (id)descriptor;

@end
