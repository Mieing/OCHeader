@class MMBrandHeadImageView, AttributeLabel, MMHeadImageView, TextStateItemView, SearchMatchTip, WCTagsView, UIImageView, UIImage, CContact, MMUILabel, MMImageView;

@interface FTSContactCell : MMTableViewCell {
    SearchMatchTip *_matchTip;
    MMBrandHeadImageView *_brandHeadImageView;
    MMHeadImageView *_headImageView;
    MMImageView *_iconNamePostfix;
    MMUILabel *_labelNamePostfix;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_detailLabel;
    MMUILabel *_appTypeLabel;
    BOOL _bAsTopHit;
    WCTagsView *_tagsView;
    UIImageView *_maskView;
    UIImage *m_defaultOpenimGroupIcon;
}

@property (retain, nonatomic) TextStateItemView *textStateView;
@property (readonly, nonatomic) CContact *contact;
@property (nonatomic) double preferHeadImageLen;
@property (nonatomic) BOOL bIsDisplayCenter;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initView;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)getTopHitDescrpition;
- (void)updateStatus:(BOOL)a0;
- (void)updateIconNamePostfix;
- (void)updateContact:(id)a0 matchTip:(id)a1;
- (void)updateContact:(id)a0 matchTip:(id)a1 asTopHit:(BOOL)a2;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
