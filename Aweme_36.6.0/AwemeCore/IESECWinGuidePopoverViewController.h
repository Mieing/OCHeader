@class IESECWinGuidePopoverRootView, IESECWinGuidePopoverView, NSString, UIView;

@interface IESECWinGuidePopoverViewController : UIViewController <IESECWinGuidePopoverRootViewDelegate>

@property (retain, nonatomic) IESECWinGuidePopoverView *guidePopover;
@property (nonatomic) unsigned long long popoverDirection;
@property (nonatomic) double arrowOffset;
@property (retain, nonatomic) UIView *attachView;
@property (retain, nonatomic) IESECWinGuidePopoverRootView *rootView;
@property (retain, nonatomic) NSString *guidePopoverText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnVC:(id)a0;
- (id)initWithGuidePopoverDirection:(unsigned long long)a0 attachView:(id)a1;
- (void)dismissGuidePopover;
- (void)setUpConstranits;
- (double)calcuGuidePopoverWidth;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;

@end
