@class NSString;

@interface AWELiveSearchServiceImpl : NSObject <IESLiveSearchService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createVisualSearchContentRequestWithImage:(id)a0 params:(id)a1 completion:(id /* block */)a2;

@end
