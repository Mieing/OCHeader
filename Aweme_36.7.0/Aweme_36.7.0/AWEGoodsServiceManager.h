@class NSString;

@interface AWEGoodsServiceManager : NSObject <AWEGoodsServiceManagerInterface>

@property (nonatomic) BOOL hasShowGoodsServiceTipsAlertView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)_trackGoodsVideoShow:(id)a0 referString:(id)a1;
- (void)_showGoodsServiceTipsAlertView;
- (void)setGoodsServiceStatus:(BOOL)a0 withUser:(id)a1 referString:(id)a2 logExtraDict:(id)a3 completion:(id /* block */)a4;
- (void)getGoodsServiceStatusWithUser:(id)a0 completion:(id /* block */)a1;
- (BOOL)enableShowGoodsVideo;
- (id)generateShareGoodsModelWithGoodsAweme:(id)a0;
- (void)willDisplayGoodsVideo:(id)a0 referString:(id)a1;
- (void)showGoodsServiceUnsubscribePopupViewWithUser:(id)a0 referString:(id)a1 logExtraDict:(id)a2;
- (void)getGoodsServiceStatusCompletion:(id /* block */)a0;
- (void)setGoodsServiceStatus:(BOOL)a0 referString:(id)a1 logExtraDict:(id)a2 completion:(id /* block */)a3;

@end
