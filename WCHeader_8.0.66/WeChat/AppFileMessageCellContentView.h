@class AppFileCircleProgressView, NSString, UIImageView, FileTransferTaskWrap, UIView, UILabel, MMUILabel;

@interface AppFileMessageCellContentView : UIView <FileTransferTaskWrapDelegate>

@property (retain, nonatomic) FileTransferTaskWrap *taskWrap;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) AppFileCircleProgressView *progressView;
@property (nonatomic) BOOL enableStatusUI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)task;
- (void)updateDisplay:(id)a0;
- (id)fileIconForType:(unsigned long long)a0;
- (void)uploadProgressUI;
- (void)refreshState;
- (void)fileTransferTaskUpdated:(id)a0;
- (void)fileTransferTask:(id)a0 onProgress:(int)a1;
- (void)fileTransferTaskCompleted:(id)a0;
- (void).cxx_destruct;

@end
