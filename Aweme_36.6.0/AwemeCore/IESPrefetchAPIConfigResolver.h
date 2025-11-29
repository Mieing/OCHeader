@class NSString;

@interface IESPrefetchAPIConfigResolver : NSObject <IESPrefetchConfigResolver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveConfig:(id)a0;
- (id)resolveAPI:(id)a0 forName:(id)a1;
- (id)resolveParams:(id)a0 forName:(id)a1;

@end
