@protocol BDECIMToastService_I, BDECIMTrackService_I, BDECIMDialogService_I, BDECIMAssertService_I, BDECIMRouterService_I;

@interface BDECIMService : NSObject

@property (class, readonly, nonatomic) id<BDECIMAssertService_I> assertService;
@property (class, readonly, nonatomic) id<BDECIMToastService_I> toastService;
@property (class, readonly, nonatomic) id<BDECIMDialogService_I> dialogService;
@property (class, readonly, nonatomic) id<BDECIMRouterService_I> routerService;
@property (class, readonly, nonatomic) id<BDECIMTrackService_I> trackService;

@end
