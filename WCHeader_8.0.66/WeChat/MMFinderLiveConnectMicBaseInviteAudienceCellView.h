@class UILabel;

@interface MMFinderLiveConnectMicBaseInviteAudienceCellView : MMFinderLiveConnectedMicBaseAudienceCellView

@property (retain, nonatomic) UILabel *rightLabel;

+ (id)ReuseIdentifier;

- (void)configRightLabel;
- (void)updateRightButton;
- (void)layoutUI;
- (void).cxx_destruct;

@end
