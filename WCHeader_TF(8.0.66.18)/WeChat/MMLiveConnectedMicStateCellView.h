@class UILabel, UISwitch, UIView;
@protocol MMLiveConnectedMicAudienceCellViewDelegate;

@interface MMLiveConnectedMicStateCellView : UITableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL canConnectMic;
@property (retain, nonatomic) UISwitch *connectMicSwitch;
@property (weak, nonatomic) id<MMLiveConnectedMicAudienceCellViewDelegate> delegate;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) UIView *bottomSeparatorLine;
@property (nonatomic) BOOL isDisabled;

- (void)prepareForReuse;
- (void)updateViews;
- (void)layoutSubviews;
- (void)switchDidChanged:(id)a0;
- (void).cxx_destruct;

@end
