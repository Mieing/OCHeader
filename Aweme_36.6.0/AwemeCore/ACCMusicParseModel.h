@class NSString;

@interface ACCMusicParseModel : ACCParseModel

@property (retain, nonatomic) NSString *clipId;

+ (id)parseModelFromParameters:(id)a0;
+ (BOOL)checkParseModelValid:(id)a0;
+ (id)parseModelFromParser:(id)a0;

- (void).cxx_destruct;

@end
