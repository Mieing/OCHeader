@class NSString, UILabel, UIImageView;
@protocol BDPPlayableGameCountDownViewDelegate;

@interface BDPPlayableGameCountDownView : UIView <BDPBootLifeCycleMessage>

@property (copy, nonatomic) NSString *uniqueID;
@property (nonatomic) long long remainedCountDownTime;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (weak, nonatomic) id<BDPPlayableGameCountDownViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationPlayableGameCountdown:(long long)a0 uniqueID:(id)a1;
- (void)applicationPlayableGameCompletion:(id)a0 uniqueID:(id)a1;
- (id)initWithUniqueId:(id)a0 remainedTime:(long long)a1;
- (void)onClickBg;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setupUI;

@end
