@class IESLiveRoomIntroductionApi, HTSEventContext, GetRoomIntroResponse_Data, RACSubject, IESLiveGuideModel, NSString, NSMutableDictionary, UICollectionView, NSNumber;
@protocol IESLiveLocationService;

@interface IESLiveRoomIntroductionViewModel : NSObject <RoomLabelCollectionViewCellDelegate, UICollectionViewDataSource, IESLabelCollectionViewLayoutDataSource>

@property (retain, nonatomic) IESLiveRoomIntroductionApi *api;
@property (retain, nonatomic) GetRoomIntroResponse_Data *roomIntroductionData;
@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) RACSubject *settingViewStateSubject;
@property (retain, nonatomic) RACSubject *updateSubject;
@property (nonatomic) BOOL pickButtonShowTracked;
@property (nonatomic) BOOL newPOISettingStatus;
@property (retain, nonatomic) id<IESLiveLocationService> locationService;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveGuideModel *guideRoom;
@property (copy, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSString *anchorID;
@property (copy, nonatomic) NSString *liveType;
@property (retain, nonatomic) NSNumber *gameCategoryID;
@property (copy, nonatomic) id /* block */ reloadPickData;
@property (readonly, nonatomic) NSMutableDictionary *extraTrackParams;
@property (nonatomic) BOOL enablePOINewStyle;
@property (retain, nonatomic) NSString *poiID;
@property (retain, nonatomic) NSString *poiName;
@property (copy, nonatomic) id /* block */ updatePOIInfoBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hideRedDot;
+ (BOOL)dotShouldShow;

- (id)updateSignal;
- (id)settingViewStateSignal;
- (id)replaceLabelIconURL:(id)a0 withLastPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionViewLayout:(id)a0 sizeForItemAtIndexPath:(id)a1;
- (void)collectionViewLayout:(id)a0 validateContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)requestRoomIntroduction;
- (void)registCellFor:(id)a0;
- (BOOL)enableIntroNewPOI;
- (void)requestLocationPermission:(id /* block */)a0;
- (id)fetchPickerSource;
- (void)hideLabelAtIndex:(long long)a0;
- (void)pickLabelAtIndex:(long long)a0;
- (void)uploadWithCompletion:(id /* block */)a0;
- (void)trackPickButton;
- (void)checkSystemStatus;
- (void)settingViewShouldDismiss;
- (void)preprocessRoomIntroLabelForPicker:(id)a0;
- (id)createAttributeStringWithRoomIntroLabel:(id)a0;
- (void)loadIconWithURL:(id)a0 completion:(id /* block */)a1;
- (void)preprocessRoomIntroLabelWith:(id)a0;
- (void)loadRoomIntroLabelIconWith:(id)a0 completion:(id /* block */)a1;
- (void)settingViewShouldAlert;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)dealloc;

@end
