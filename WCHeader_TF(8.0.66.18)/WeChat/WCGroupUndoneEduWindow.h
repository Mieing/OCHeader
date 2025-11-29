@class UIButton, WCGroupUndoneEduView, NSString;
@protocol WCGroupUndoneEduViewDelegate;

@interface WCGroupUndoneEduWindow : MMWindowViewController <WCGroupUndoneEduViewDelegate>

@property (retain, nonatomic) UIButton *backgroundBtn;
@property (weak, nonatomic) id<WCGroupUndoneEduViewDelegate> undoneDelegate;
@property (readonly, nonatomic) WCGroupUndoneEduView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)setupViews;
- (void)viewDidLayoutSubviews;
- (void)onGUEClose:(id)a0;
- (void)onGUEConfirm:(id)a0;
- (void).cxx_destruct;

@end
