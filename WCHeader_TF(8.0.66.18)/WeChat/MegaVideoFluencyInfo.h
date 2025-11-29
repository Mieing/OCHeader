@interface MegaVideoFluencyInfo : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) int hot;
@property (nonatomic) int pull;
@property (nonatomic) int finish;
@property (nonatomic) unsigned int globalInitMs;
@property (nonatomic) unsigned int pullCgiMs;
@property (nonatomic) unsigned int showUiMs;
@property (nonatomic) unsigned int downloadBeginMs;
@property (nonatomic) unsigned int dataHandleMs;

+ (void)initialize;

@end
