@class NSString;

@interface IESIMProgressLoadingService : HTSService <IESIMProgressLoadingService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createProgressLoadingViewWithType:(long long)a0 title:(id)a1;

@end
