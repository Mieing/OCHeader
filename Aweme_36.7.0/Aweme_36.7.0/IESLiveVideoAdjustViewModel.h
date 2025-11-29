@class IESLiveBeautyResourceFetcher, NSMutableDictionary, NSArray, IESLiveRoomBeautyItem, NSString, NSMutableArray, IESLiveVideoAdjustVMContext;
@protocol IESLiveVideoAdjustViewModelDelegate;

@interface IESLiveVideoAdjustViewModel : NSObject <IESLiveVideoAdjustViewDelegate>

@property (retain, nonatomic) IESLiveVideoAdjustVMContext *videoAdjustContext;
@property (retain, nonatomic) NSMutableArray *categoryList;
@property (retain, nonatomic) NSMutableDictionary *categoryDict;
@property (retain, nonatomic) NSArray *tabOrder;
@property (retain, nonatomic) NSMutableDictionary *registerMap;
@property (retain, nonatomic) IESLiveBeautyResourceFetcher *resourceFetcher;
@property (weak, nonatomic) id<IESLiveVideoAdjustViewModelDelegate> delegate;
@property (retain, nonatomic) IESLiveRoomBeautyItem *cameraFollowItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupParams;
- (void)didSelectCategoryAtIndex:(long long)a0;
- (void)initAndRenderEffect;
- (void)fetchVideoAdjustEffectListWithCompletion:(id /* block */)a0;
- (id)videoAdjustCategoryList;
- (void)didSelectItemAtIndexPath:(id)a0 categoryIndex:(long long)a1;
- (void)didChangeValue:(long long)a0 item:(id)a1;
- (void)didFinishValueChange:(long long)a0 item:(id)a1;
- (void)resetButtonClickedWithItemList:(id)a0;
- (void)didSelectLevelIndex:(unsigned long long)a0 forItem:(id)a1;
- (void)setupEffectHandler;
- (void)setupVEHandler;
- (id)getLocalCameraItem;
- (void)monitorFetchWithType:(id)a0 error:(id)a1 duration:(id)a2;
- (id)adjustResourceCompletionWithBeautyItems:(id)a0 error:(id)a1 startTime:(double)a2;
- (id)handlerWithProcessType:(unsigned long long)a0;
- (void)trackVideoAdjustCategorySelected:(long long)a0;
- (void)trackVideoAdjustItemSelected:(id)a0 categoryIndex:(long long)a1;
- (void)trackResetButtonClicked;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)setupDataSource;
- (void)setupHandler;

@end
