@class NSString, EcsRichTextLabel, EcsRichTextButtonViewModel, UIView;

@interface EcsFinderFeedPopupCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>

@property (retain, nonatomic) UIView *textContainer;
@property (retain, nonatomic) EcsRichTextLabel *textLabel;
@property (retain, nonatomic) EcsRichTextButtonViewModel *viewDataModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void).cxx_destruct;

@end
