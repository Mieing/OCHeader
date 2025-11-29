@class NSString;

@interface AWEGDeliveryPreloadProvider : NSObject <AWEGDContainerPreLoadProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preload:(unsigned long long)a0;
- (BOOL)enablePreload;
- (void)reportTrackWithContext:(id)a0;
- (void)setBizData:(id)a0 forKey:(id)a1;
- (id)bizDataForKey:(id)a0;
- (id)supportPreloadSchemas;
- (BOOL)optimizeMemoryEnable;
- (BOOL)supportPreloadWithType:(unsigned long long)a0;
- (void)preload;
- (void)updateWithContext:(id)a0;

@end
