@class NSTimer, NSString, BDPUniqueID, UIImageView, BDPTimingEvent, UIButton, BDPButton, UILabel;
@protocol BDPFavoritesTipFloatingDelegate_HG;

@interface BDPFavoritesTipFloating_HG : UIView {
    UIImageView *_iconImageView;
    BDPButton *_addButton;
    double _tipLabelWidth;
    id /* block */ _addActionBlock;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) NSString *tipString;
@property (copy, nonatomic) NSString *iconURL;
@property (nonatomic) long long position;
@property (retain, nonatomic) NSTimer *hideTimer;
@property (retain, nonatomic) BDPTimingEvent *trackerTiming;
@property (weak, nonatomic) id<BDPFavoritesTipFloatingDelegate_HG> delegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (void)closeBtnClicked:(id)a0;
- (void)event:(id)a0 param:(id)a1;
- (void)addBtnClicked:(id)a0;
- (void)internalHideWithType:(id)a0;
- (id)initWithDelegate:(id)a0 tipString:(id)a1 iconURL:(id)a2;
- (void)setupAddActionBlock:(id /* block */)a0;
- (void)showOnView:(id)a0 withPosition:(long long)a1;
- (void).cxx_destruct;
- (void)hide;
- (void)willMoveToSuperview:(id)a0;
- (void)dealloc;

@end
