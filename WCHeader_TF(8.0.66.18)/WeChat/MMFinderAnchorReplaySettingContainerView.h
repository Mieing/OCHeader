@class NSString, MMWebImageView, MMUIButton, MMUILabel;

@interface MMFinderAnchorReplaySettingContainerView : UIView

@property (retain, nonatomic) MMWebImageView *coverImageView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMUILabel *detailLabel;
@property (retain, nonatomic) MMUIButton *createButton;
@property (retain, nonatomic) MMUILabel *creatingLabel;
@property (retain, nonatomic) MMUIButton *completedButton;
@property (retain, nonatomic) MMUIButton *creatingButton;
@property (retain, nonatomic) MMUILabel *cannotCreateLabel;
@property (nonatomic) unsigned int replayState;
@property (nonatomic) BOOL canGenerateReplay;
@property (nonatomic) BOOL isChargableLive;
@property (nonatomic) BOOL isMemberLive;
@property (retain, nonatomic) NSString *liveCoverUrl;
@property (nonatomic) BOOL replayCanBeCancelled;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void)updateData:(unsigned int)a0 canGenerateReplay:(BOOL)a1 isMemberLive:(BOOL)a2 isChargableLive:(BOOL)a3 liveCoverUrl:(id)a4 replayCanBeCancelled:(BOOL)a5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)createUI;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutUI;
- (void)createReplayAction;
- (void).cxx_destruct;

@end
