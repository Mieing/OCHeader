@class NSString, UILabel, UIView, UIButton;
@protocol WCPayFavorSelectCellDelegate;

@interface WCPayFavorSelectCell : UITableViewCell

@property (retain, nonatomic) NSString *m_title;
@property (retain, nonatomic) NSString *m_desc;
@property (nonatomic) BOOL m_selected;
@property (nonatomic) BOOL m_canSelect;
@property (nonatomic) long long m_index;
@property (retain, nonatomic) UILabel *m_titleLabel;
@property (retain, nonatomic) UILabel *m_descLabel;
@property (retain, nonatomic) UIButton *m_selectedButton;
@property (retain, nonatomic) UIView *m_maskView;
@property (retain, nonatomic) UIView *m_lineView;
@property (retain, nonatomic) UIView *m_firstLineView;
@property (nonatomic) BOOL m_isFirstCell;
@property (nonatomic) BOOL m_isLastCell;
@property (weak, nonatomic) id<WCPayFavorSelectCellDelegate> m_delegate;

- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateTitle:(id)a0 desc:(id)a1 selected:(BOOL)a2 canSelect:(BOOL)a3 index:(long long)a4;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateAccessibilityLabel;
- (void)updateTitle;
- (void)updateDesc;
- (void)updateSelected;
- (void)updateMaskView;
- (void)setFirstCell:(BOOL)a0;
- (void)setLastCell:(BOOL)a0;
- (BOOL)isFirstCell;
- (BOOL)isLastCell;
- (void)updateLineView;
- (void)updateLastCellLineView;
- (void)updateFirstCellLineView;
- (void)onClickSelectButton;
- (void).cxx_destruct;

@end
