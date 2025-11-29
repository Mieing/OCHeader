@class NSDictionary, NSString, DUXBottomNotification;

@interface AWEPlayInteractionDislikeBottomNotificationManager : NSObject

@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL disableToast;
@property (retain, nonatomic) NSString *disableToastShowAwemeID;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;

+ (id)sharedInstance;

- (void)dislikeToastOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2 dismissWhenClick:(BOOL)a3 clicked:(id /* block */)a4;
- (void)showWithdrawGuideToastOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2;
- (void)removeDislikeToastWithAweme:(id)a0;
- (void)showBubbleWithToast:(id)a0 awemeModel:(id)a1 onVC:(id)a2 autoDismissTime:(double)a3 buttonText:(id)a4 buttonActionSchema:(id)a5;
- (void)showBubbleWithConfig:(id)a0;
- (id)createBottomNotification:(unsigned long long)a0 dismiss:(id /* block */)a1;
- (void)dislikeToastOnVC:(id)a0 awemeModel:(id)a1 trackExtra:(id)a2;
- (void).cxx_destruct;

@end
