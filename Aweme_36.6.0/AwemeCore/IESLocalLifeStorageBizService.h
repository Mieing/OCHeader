@class NSString;

@interface IESLocalLifeStorageBizService : HTSService <IESLocalLifeStorageBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mainStorage;
+ (id)poiStorage;
+ (id)foundationStorage;


@end
