@class YYLabel, NSAttributedString;

@interface IESECRelationTruncatedTextView : UIView {
    BOOL _needRelayout;
}

@property (retain, nonatomic) YYLabel *textLabel;
@property (copy, nonatomic) NSAttributedString *text;
@property (copy, nonatomic) NSAttributedString *truncationToken;
@property (nonatomic) unsigned long long truncationType;
@property (nonatomic) unsigned long long maxNumberOfLines;
@property (nonatomic) double lineHeight;
@property (nonatomic) long long lineBreakMode;

- (void)p_updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
