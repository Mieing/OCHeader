@class MMFinderLiveConnectedMicHintBaseViewCell, NSString;

@interface MMFinderLiveConnectedMicHintCollectionViewCell : UICollectionReusableView

@property (retain, nonatomic) MMFinderLiveConnectedMicHintBaseViewCell *baseView;
@property (retain, nonatomic) NSString *hint;

+ (id)ReuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)setCorner:(BOOL)a0;
- (void)setTextLabelBottom:(double)a0;
- (void).cxx_destruct;

@end
