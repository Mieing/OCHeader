@class FinderAudienceLiveInfo, NSMutableArray, UIView;

@interface WCFinderLiveProfileInteractionInfoView : MMUIView

@property (retain, nonatomic) NSMutableArray *itemLabels;
@property (retain, nonatomic) UIView *seperatorLine;
@property (retain, nonatomic) FinderAudienceLiveInfo *info;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithAudienceLiveInfo:(id)a0;
- (void).cxx_destruct;

@end
