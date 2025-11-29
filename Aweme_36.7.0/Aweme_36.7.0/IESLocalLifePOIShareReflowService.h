@class NSString, NSMutableDictionary;

@interface IESLocalLifePOIShareReflowService : HTSService <IESLocalLifePOIShareReflowService>

@property (retain, nonatomic) NSMutableDictionary *shareReflowDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchShareReflowParamsIn:(long long)a0;
- (void)addShareReflowWithParams:(id)a0 scene:(long long)a1;
- (void)removeShareReflowParamsWithScene:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
