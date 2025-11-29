@class NewLifePostEndParams;

@interface NewLifePostEndReq : WXPBGeneratedMessage

@property (nonatomic) unsigned int realEnterScene;
@property (nonatomic) unsigned int action;
@property (retain, nonatomic) NewLifePostEndParams *params;

+ (void)initialize;

@end
