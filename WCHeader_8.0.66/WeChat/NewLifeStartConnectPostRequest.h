@class NewLifeConnectPostInfo;

@interface NewLifeStartConnectPostRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) NewLifeConnectPostInfo *prefillInfo;

+ (void)initialize;

@end
