@class NSString, NSDictionary, UIImageView, AWEAwemeModel, UILabel, UIView;

@interface AWEShowMediumAnchorCommentView : UIView <AWEShowMediumAnchorCommentViewProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *tagLabel;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *suffixBGView;
@property (retain, nonatomic) UILabel *suffixLabel;
@property (retain, nonatomic) UILabel *fieldLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mediumViewDidShow;
- (void)configSubViews;
- (id)cardTrackParams;
- (id)initWithModel:(id)a0 params:(id)a1;
- (id)suffixLabelText;
- (id)fieldLabeAttributedString;
- (id)filterFieldArray;
- (void)mediumViewTapped;
- (void)addTapGesture;
- (void).cxx_destruct;
- (void)setupUI;

@end
