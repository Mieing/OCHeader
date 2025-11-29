@class NSArray, NSString, UICollectionView;

@interface AWEPushSettingReceiveWhoseNotificationView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) UICollectionView *settingsCollection;
@property (retain, nonatomic) NSArray *settings;
@property (nonatomic) BOOL useNewStyle;
@property (nonatomic) BOOL isGuideShowing;
@property (nonatomic) unsigned long long whose;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSString *notReceiveBtnTitle;
@property (nonatomic) BOOL isPushEnable;
@property (nonatomic) BOOL inner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })referenceSize;

- (void)__setupUI;
- (id)__titleForSetting:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 useNewStyle:(BOOL)a1;
- (void).cxx_destruct;
- (void)reload;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;

@end
