@class IESLivePlaybackTitleStatusModel, NSString, UILabel, UIView;

@interface IESLivePlaybackSubtitleStatusView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) NSString *subTitleString;
@property (retain, nonatomic) IESLivePlaybackTitleStatusModel *model;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *contentView;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)updatePlayCount:(id)a0;
- (void)configViewWith:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)viewType;
- (void)setup;

@end
