@class UIButton, NSString;

@interface AWEHPTopBarScanEntranceItem : AWEHPTopBarBaseEntranceItem <AWEHPTopBarEntranceItemProtocol>

@property (retain, nonatomic) UIButton *leftScanButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedContainerViewControllerCommonAdapterClass;
+ (BOOL)entranceShouldShow;
+ (id)entranceBizID;

- (void)themeDidChange:(long long)a0;
- (unsigned long long)entranceType;
- (id)entranceView;
- (id)aAWEFeedContainerViewControllerCommonAdapter;
- (struct CGSize { double x0; double x1; })entranceSize;
- (void)leftScanButtonTapped:(id)a0;
- (void).cxx_destruct;

@end
