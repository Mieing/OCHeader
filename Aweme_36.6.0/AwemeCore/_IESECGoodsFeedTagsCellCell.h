@class IESECGoodsFeedTagView, UIFont, IESECGoodsFeedTagModel;

@interface _IESECGoodsFeedTagsCellCell : UICollectionViewCell {
    IESECGoodsFeedTagView *_tagView;
    IESECGoodsFeedTagModel *_tag;
    UIFont *_textFont;
}

@property (class, readonly, nonatomic) UIFont *textFont;

@property (copy, nonatomic) id /* block */ tagDidSelectHandler;

- (void)updateWithTagModel:(id)a0;
- (void)tagViewDidClick:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
