@class NewLifeConnectPostInfo;

@interface NewLifeConnectPostRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NewLifeConnectPostInfo *info;
@property (nonatomic) unsigned long long localId;
@property (nonatomic) BOOL silent;

+ (void)initialize;

@end
