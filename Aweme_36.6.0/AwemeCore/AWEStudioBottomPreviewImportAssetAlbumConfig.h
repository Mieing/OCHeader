@class NSNumber, UIView;
@protocol CAKAlbumPreviewPageBottomViewProtocol, CAKAlbumBottomViewProtocol;

@interface AWEStudioBottomPreviewImportAssetAlbumConfig : NSObject

@property (copy, nonatomic) NSNumber *maxSelectionCount;
@property (nonatomic) BOOL photoEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL livephotoEnabled;
@property (copy, nonatomic) NSNumber *enablePullableFullScreenPresentation;
@property (copy, nonatomic) NSNumber *enableSelectBtnOnTopForPreviewPage;
@property (copy, nonatomic) NSNumber *bottomViewHeight;
@property (copy, nonatomic) NSNumber *forceEnableDarkMode;
@property (copy, nonatomic) id /* block */ updateListConfigBlock;
@property (copy, nonatomic) id /* block */ updateBottomConfigBlock;
@property (copy, nonatomic) id /* block */ updateSelectedAssetsViewConfigBlock;
@property (retain, nonatomic) UIView<CAKAlbumBottomViewProtocol> *customBottomView;
@property (retain, nonatomic) UIView<CAKAlbumPreviewPageBottomViewProtocol> *customBottomViewForPreview;
@property (copy, nonatomic) id /* block */ updateNextButtonBlock;

- (void).cxx_destruct;

@end
