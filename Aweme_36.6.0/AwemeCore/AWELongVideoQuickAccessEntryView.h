@class NSString, DUXTag;

@interface AWELongVideoQuickAccessEntryView : UIView <AWEShowQuickAccessEntryViewProtocol>

@property (weak, nonatomic) DUXTag *tagView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureUI;
- (id)contentSnapshotImage;
- (struct CGSize { double x0; double x1; })entryContentSize;
- (void)setEntryContentHidden:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
