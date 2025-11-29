@class NSString;

@interface IESECMallRecommendService : NSObject <IESECMallRecommendViewService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recommendWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1 configBlock:(id /* block */)a2;
+ (void)preloadBundleWith:(id)a0;
+ (Class)getRecommendViewClass;


@end
