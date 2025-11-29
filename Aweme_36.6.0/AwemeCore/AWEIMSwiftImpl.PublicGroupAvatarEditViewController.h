@interface AWEIMSwiftImpl.PublicGroupAvatarEditViewController : UIViewController <AWEIMInAppPushProtocol, DUXSheetDelegate> {
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ photoLibraryViewController;
}

- (BOOL)canShowInnerPush;
- (void)sheet:(id)a0 didChangeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withUserInteraction:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
