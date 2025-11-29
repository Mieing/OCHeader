@class NSString;

@interface IESLocalLifeEnterIdManagerBizService : HTSService <IESLocalLifeEnterIdManagerBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAllEnterId;
- (void)setEnterIdCacheWithBtm:(id)a0 targetParamKey:(id)a1;
- (void)markEnterIdCacheWithBtm:(id)a0;

@end
