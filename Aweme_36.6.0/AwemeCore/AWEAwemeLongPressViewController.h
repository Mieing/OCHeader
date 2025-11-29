@class NSString, UICollectionView, AFDLongPressContext, AWEAwemeLongPressListFlowLayout, NSObject;
@protocol AWEAwemeLongPressViewModelProtocol;

@interface AWEAwemeLongPressViewController : AWEBaseListViewController <AWEAwemeLongPressViewControllerProtocol>

@property (retain, nonatomic) AFDLongPressContext *context;
@property (retain, nonatomic) AWEAwemeLongPressListFlowLayout *layout;
@property (nonatomic) double longPressMenuHeight;
@property (readonly, nonatomic) UICollectionView *baseCollectionView;
@property (retain, nonatomic) NSObject<AWEAwemeLongPressViewModelProtocol> *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutForCollectionView;
- (id)sectionControllerClassArray;
- (void)dataSourceDidCreateSectionController:(id)a0 forSectionViewModel:(id)a1;
- (void)rotated:(id)a0;
- (void)configWithReasonModels:(id)a0 aweme:(id)a1;
- (void)updateWithReasonModels:(id)a0;
- (void)unfoldDislikeModelWithInsertModels:(id)a0;
- (void)unfoldDislikeReasonsListWithModels:(id)a0 aweme:(id)a1;
- (void)unfoldDislikeReasonsList;
- (void)showSpeedControl;
- (void)updateCollectionViewScrollability;
- (void)sendIMIfNeeded;
- (void)unfoldAdDislikeReasonsListWithAweme:(id)a0 isUnfold:(BOOL)a1;
- (long long)indexOfDislike;
- (void)p_postBatchSendNoti:(id)a0 awemeID:(id)a1;
- (void)configWithReasonModels:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithContext:(id)a0;
- (void)dealloc;
- (void)setupCollectionView:(id)a0;

@end
