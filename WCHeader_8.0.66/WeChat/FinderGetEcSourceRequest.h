@class NSString;

@interface FinderGetEcSourceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sharerUsername;
@property (nonatomic) unsigned int shareScene;
@property (retain, nonatomic) NSString *finderUsername;
@property (nonatomic) unsigned long long objectId;

+ (void)initialize;

@end
