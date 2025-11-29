@class NSString, SystemImagePickViewController;
@protocol SystemImagePickViewControllerDelegate;

@interface LiteAppAlbumViewImpl : UIView {
    BOOL _autoHeight;
    BOOL _autoWidth;
}

@property (retain, nonatomic) SystemImagePickViewController *vc;
@property (nonatomic) BOOL isRealAppear;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) BOOL disableLayoutSubview;
@property (retain, nonatomic) NSString *albumid;
@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSString *mode;
@property (retain, nonatomic) NSString *showType;
@property (nonatomic) unsigned long long countLimit;
@property (retain, nonatomic) NSString *preview;
@property (nonatomic) BOOL livePhoto;
@property (weak, nonatomic) id<SystemImagePickViewControllerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)initAlbumView;
- (void)selectAlbum:(id)a0;
- (void)attachLiteAppView:(id)a0;
- (void)onAttachViewController:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)attachParentViewController;
- (id)findViewController;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
