@class AWEIMFansTagItemModel, UIImageView, AWEIMFansTagsModel, AWEIMMessageCellTagLabel, IESIMButton;

@interface AWEIMFansTagsView : UIView

@property (retain, nonatomic) AWEIMFansTagsModel *model;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEIMMessageCellTagLabel *highValueFanTagLabel;
@property (retain, nonatomic) UIImageView *liveFansImageView;
@property (retain, nonatomic) IESIMButton *ecomOrLiveSubscriberButton;
@property (retain, nonatomic) AWEIMFansTagItemModel *fansClubTagModel;
@property (retain, nonatomic) AWEIMFansTagItemModel *highValueFanTagModel;
@property (nonatomic) BOOL needUpdateLayout;

- (void)configWithModel:(id)a0;
- (void)resetFansTags;
- (void)layoutFansTagsView;
- (double)heightOfFansTagsView;
- (id)tagItemViewWithModel:(id)a0;
- (void)openSchemaWithModel:(id)a0;
- (id)iconInfoWithModel:(id)a0;
- (id)fansClubPlaceholderIconWithType:(long long)a0;
- (id)fansClubIconURLWithType:(long long)a0 level:(long long)a1;
- (void)handleHighValueFanTagLabelTapGesture:(id)a0;
- (void)handleLiveFansImageViewTapGesture:(id)a0;
- (void).cxx_destruct;
- (id)initWithScene:(long long)a0;

@end
