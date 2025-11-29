@class NSString;

@interface IESLivePopularCardAPIImpl : NSObject <IESLivePopularCardAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestPopularityCardUseStatusWithParams:(id)a0 complete:(id /* block */)a1;

@end
