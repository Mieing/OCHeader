@class NSString;

@interface AWEStudioPublishFactoryImpl : NSObject <AWEStudioPublishFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishTrackerWithModel:(id)a0;
- (id)infiniTaskWithModel:(id)a0;
- (id)albumImageTaskWithModel:(id)a0;

@end
