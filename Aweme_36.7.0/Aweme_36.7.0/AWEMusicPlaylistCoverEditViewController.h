@class NSString;

@interface AWEMusicPlaylistCoverEditViewController : TOCropViewController <TOCropViewControllerDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cropViewController:(id)a0 didCropToImage:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 angle:(long long)a3 button:(id)a4;
- (void)cropViewController:(id)a0 didFinishCancelled:(BOOL)a1;
- (long long)croppingStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCropViewWithVerticalLayout:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
