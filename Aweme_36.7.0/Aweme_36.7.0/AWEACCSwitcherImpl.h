@class NSString, UIView;
@protocol AWESettingSwitchProtocol;

@interface AWEACCSwitcherImpl : NSObject <ACCSwitchProtocol>

@property (retain, nonatomic) UIView<AWESettingSwitchProtocol> *switcher;
@property (copy, nonatomic) id /* block */ chooseBeforeStatusChangeBlock;
@property (copy, nonatomic) id /* block */ switchStatusChangedBlock;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (nonatomic) BOOL changeBlockNeedAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnabled:(BOOL)a0 disableOpacity:(double)a1;
- (void).cxx_destruct;
- (id)content;
- (id)init;
- (void)updateStatus;

@end
