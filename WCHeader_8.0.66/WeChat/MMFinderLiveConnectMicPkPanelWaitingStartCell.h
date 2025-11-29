@class NSString, UIImageView, MMFinderLiveConnectMicPKInfo, UILabel, UIView, UIButton;
@protocol MMFinderLiveConnectMicPkPanelCellDelegate;

@interface MMFinderLiveConnectMicPkPanelWaitingStartCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *waitingImageView;
@property (retain, nonatomic) UILabel *waitingLabel;
@property (retain, nonatomic) UIButton *cancelBtn;
@property (retain, nonatomic) UIButton *acceptBtn;
@property (retain, nonatomic) UIButton *quitMicBtn;
@property (retain, nonatomic) MMFinderLiveConnectMicPKInfo *pkInfo;
@property (weak, nonatomic) id<MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)cellHeight;
+ (id)ReuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)onCancelPk;
- (void)onAcceptPk;
- (void)onCloseMic;
- (void)updatePkInfo:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end
