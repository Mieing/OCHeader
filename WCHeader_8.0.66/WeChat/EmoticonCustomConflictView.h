@class UILabel, UIButton;
@protocol CustomEmoticonConflictViewDelegate;

@interface EmoticonCustomConflictView : UICollectionReusableView

@property (retain, nonatomic) UILabel *m_comflictWordingLabel;
@property (retain, nonatomic) UIButton *m_closeButton;
@property (weak, nonatomic) id<CustomEmoticonConflictViewDelegate> m_delegate;
@property (nonatomic) unsigned long long limit;

- (void)layoutWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)initView;
- (void)initComflictWordingLabel;
- (void)initCloseButton;
- (void)setDelegate:(id)a0;
- (void)onClickClose;
- (void).cxx_destruct;

@end
