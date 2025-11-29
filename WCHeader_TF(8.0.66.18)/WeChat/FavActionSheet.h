@class NSString, NSMutableArray, MMImageOpenWeAppLogic;
@protocol FavActionSheetDelegate;

@interface FavActionSheet : MMScrollActionSheet <RecentForwardScrollViewDelegate, MMScrollActionSheetDelegate, MMImageOpenWeAppDelegate> {
    NSMutableArray *m_itemArray;
    NSMutableArray *m_firstRow;
    NSMutableArray *m_secondRow;
    long long m_enableItemType;
    MMImageOpenWeAppLogic *m_openWeAppLogic;
}

@property (weak, nonatomic) id<FavActionSheetDelegate> favDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFavDelegate:(id)a0 enableType:(unsigned long long)a1;
- (id)recentForwardView;
- (void)configRecentForwardScrollView;
- (void)configActionSheet;
- (void)configScanQRWith:(id)a0;
- (void)configSheetItem;
- (id)AddNewActionSheetCell2Array:(id)a0 WithText:(id)a1 WithImage:(id)a2;
- (id)AddNewActionSheetCell2Array:(id)a0 WithText:(id)a1 WithImage:(id)a2 WithAccessibilityLabel:(id)a3;
- (void)clickRFItemCallBack:(id)a0;
- (void)relayoutScrollSheet;
- (void)scrollActionSheet:(id)a0 didSelecteItem:(id)a1;
- (void)scrollActionSheetWillDismiss:(id)a0;
- (void)onAppendQRCodeMultiView:(id)a0;
- (void)onQRCodeRowViewTapped;
- (void)onQRCodeRowViewBanned;
- (void)onQRCodeScansFinished;
- (void).cxx_destruct;

@end
