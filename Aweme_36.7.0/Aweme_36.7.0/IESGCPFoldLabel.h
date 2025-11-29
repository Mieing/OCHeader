@class YYLabel, NSAttributedString;
@protocol IESGCPFoldLabelDelegate;

@interface IESGCPFoldLabel : UIView

@property (retain, nonatomic) YYLabel *contentLabel;
@property (nonatomic) BOOL isFold;
@property (retain, nonatomic) NSAttributedString *attributeString;
@property (readonly, nonatomic) double unfoldHeight;
@property (readonly, nonatomic) double foldHeight;
@property (readonly, nonatomic) double currentHeight;
@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long lineLimit;
@property (weak, nonatomic) id<IESGCPFoldLabelDelegate> delegate;

- (void)configAttributeString:(id)a0 withExpandAttributeStringBlock:(id /* block */)a1;
- (void)configFold:(BOOL)a0;
- (void)showUnFoldState;
- (void)showFoldState;
- (void)configAttributeString:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
