@class NSDictionary, AWEDeliveryInputViewOptions;

@interface AWEDeliveryInputViewBiz : NSObject

@property (copy, nonatomic) NSDictionary *requestCommonParams;
@property (copy, nonatomic) NSDictionary *videoSetting;
@property (copy, nonatomic) id /* block */ onSendPhotos;
@property (copy, nonatomic) id /* block */ oneTakePhotoBlock;
@property (retain, nonatomic) AWEDeliveryInputViewOptions *options;

- (id)generateRequestParamsWithParams:(id)a0;
- (id)initWithRequestCommonParams:(id)a0;
- (void)fetchMoreViewDataWithCompletion:(id /* block */)a0;
- (void)onClickChoosePhotoWithCompletion:(id /* block */)a0;
- (void)onClickTakePhotoWithCompletion:(id /* block */)a0;
- (id)getMoreViewDefaultItems;
- (void)callMediaWithType:(unsigned long long)a0;
- (void)sendPhotosWithAssets:(id)a0 itemType:(unsigned long long)a1;
- (void)showOverSizeErrorWithCount:(long long)a0;
- (void).cxx_destruct;

@end
