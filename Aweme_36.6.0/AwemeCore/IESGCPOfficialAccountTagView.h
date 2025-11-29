@class UIColor, NSString, UIImageView, IESGCPOfficialTagViewModel, UILabel, UIView;

@interface IESGCPOfficialAccountTagView : UIControl <IESGCPTagViewProtocol>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *officialIconView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UIImageView *arrowIconView;
@property (retain, nonatomic) IESGCPOfficialTagViewModel *tagViewModel;
@property (nonatomic) double fontSize;
@property (nonatomic) double padding;
@property (retain, nonatomic) UIColor *tagTextColor;
@property (retain, nonatomic) UIColor *arrowColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tagStyleParamsDidUpdate;
- (id)commonReportParams;
- (void)setupWithTagViewModel:(id)a0;
- (void)didClickAccountTagView:(id)a0;
- (void)reloadArrowImage;
- (void)updateContentPadding;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
