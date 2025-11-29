@class UIView, NSString, AWEShowQuickAccessEntryContext;
@protocol AWEShowQuickAccessEntryViewProtocol, AWEShowQuickAccessEntryProtocol;

@interface AWEShowQuickAccessEntryContentView : UIView <AWEShowQuickAccessEntryContentViewProtocol>

@property (weak, nonatomic) id<AWEShowQuickAccessEntryProtocol> currentEntry;
@property (retain, nonatomic) AWEShowQuickAccessEntryContext *currentContext;
@property (weak, nonatomic) UIView<AWEShowQuickAccessEntryViewProtocol> *entryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapGestureAction:(id)a0;
- (void)displayEntry:(id)a0 context:(id)a1;
- (void)removeCurrentEntryForEntry:(id)a0 context:(id)a1;
- (void)displayNewEntryViewForEntry:(id)a0 lastEntryView:(id)a1 context:(id)a2;
- (id)createEntryContentSnapshotImageViewForEntryView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
