@class NSString, MMLoadingView;
@protocol BlockViewControllerDelegate;

@interface BlockViewController : MMUIViewController {
    MMLoadingView *_loadingView;
}

@property (retain, nonatomic) NSString *viewTitle;
@property (retain, nonatomic) NSString *failTips;
@property (retain, nonatomic) NSString *loadingWording;
@property (weak, nonatomic) id<BlockViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)showFailView;
- (void)onReturn;
- (void).cxx_destruct;

@end
