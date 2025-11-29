@class NSString;

@interface HTSLiveCommonButton : IESLivePBBaseMessage

@property (nonatomic) int type;
@property (nonatomic) int clickType;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *jumpSchemaURL;
@property (nonatomic) int countdownDuration;
@property (copy, nonatomic) NSString *jsbArgs;

+ (id)descriptor;

@end
