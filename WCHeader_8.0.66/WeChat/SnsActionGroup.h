@class NSString, SnsAction;

@interface SnsActionGroup : WXPBGeneratedMessage

@property (nonatomic) unsigned long long id;
@property (nonatomic) unsigned long long parentId;
@property (retain, nonatomic) SnsAction *currentAction;
@property (retain, nonatomic) SnsAction *referAction;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int objectCreateTime;

+ (void)initialize;

@end
