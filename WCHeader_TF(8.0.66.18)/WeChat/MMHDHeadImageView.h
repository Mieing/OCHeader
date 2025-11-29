@class ImageScrollView, MMUIActivityIndicatorView, UIImageView, CBaseContact, NSString, UIView, MMHDHeadImageViewController;
@protocol HDHeadImageViewDelegate;

@interface MMHDHeadImageView : MMUIView <MessageObserverDelegate, WCActionSheetDelegate, ImageScrollViewDelegate, IUiUtilExt> {
    ImageScrollView *m_imgView;
    UIView *m_imgMask;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } m_rcImgBegin;
    unsigned int m_uiDownloadEventID;
    BOOL m_fullScreen;
    double m_cornerRadius;
}

@property (weak, nonatomic) MMHDHeadImageViewController *windowContainer;
@property (retain, nonatomic) UIImageView *m_backgroundView;
@property (retain, nonatomic) MMUIActivityIndicatorView *m_activityIndicatorView;
@property (readonly, nonatomic) BOOL m_bLoading;
@property (retain, nonatomic) CBaseContact *m_contact;
@property (weak, nonatomic) id<HDHeadImageViewDelegate> m_delegate;
@property (nonatomic) unsigned char headCategory;
@property (nonatomic) BOOL m_needShowLoading;
@property (nonatomic) BOOL m_bShowInViewController;
@property (nonatomic) BOOL enableDragDownToClose;
@property (nonatomic) BOOL needUseScreenFrame;
@property (nonatomic) BOOL bAlwayShowDefaultImage;
@property (nonatomic) long long sourceScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)BeforeInit;
- (id)initWithContact:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)startLoading;
- (void)stopLoadingInternal;
- (void)stopLoading;
- (void)reset;
- (void)startShowImg:(BOOL)a0;
- (void)setImgBeginRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getRealUserName:(id)a0;
- (void)updateHead;
- (void)updateHDHead;
- (void)downloadHDImg;
- (void)hide;
- (void)showInOriginPlace:(BOOL)a0;
- (void)show;
- (void)promptSaveToPhotoLibrary:(id)a0;
- (void)OnLongPress:(id)a0;
- (void)onSingleTap:(id)a0;
- (void)onFullScreenItemDragToClose;
- (void)MessageReturn:(unsigned int)a0 MessageInfo:(id)a1 Event:(unsigned int)a2;
- (void)saveImage;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)dealloc;
- (void)onMainWindowFrameChanged;
- (void)onFullScreenItemChangeAlpha:(double)a0;
- (void)onUserDidTakeScreenshot;
- (void).cxx_destruct;

@end
