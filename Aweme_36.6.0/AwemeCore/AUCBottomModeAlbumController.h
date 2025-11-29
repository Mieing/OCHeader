@class AWEVideoPublishViewModel, NSString, CAKAlbumViewController, UIView, UIButton;
@protocol AUCBottomModeAlbumControllerDelegate;

@interface AUCBottomModeAlbumController : NSObject <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (readonly, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) UIView *fakeStatusView;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) UIView *view;
@property (readonly, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<AUCBottomModeAlbumControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)closeAction:(id)a0;
- (void)p_setupViews;
- (id)initWithInputData:(id)a0 publishModel:(id)a1;
- (void)p_setupAlbumWithInputData:(id)a0;
- (void)p_updateAlbumViewWithAssets:(id)a0;
- (void).cxx_destruct;
- (void)hide;
- (void)show;

@end
