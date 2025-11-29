@class NSString, IESLiveGuideOpenPlatformPromptView;

@interface IESLiveGameOpenPlatformPromptUtil : NSObject

@property (copy, nonatomic) NSString *appId;
@property (nonatomic) unsigned long long appType;
@property (retain, nonatomic) IESLiveGuideOpenPlatformPromptView *promptView;

- (id)initWithAppId:(id)a0 appType:(unsigned long long)a1;
- (double)stringWidth:(id)a0;
- (void)dismissPrompt;
- (id)configPromptRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 containerView:(id)a1 atView:(id)a2 position:(unsigned long long)a3 centerOffset:(struct CGSize { double x0; double x1; })a4 arrowCenterOffset:(double)a5;
- (BOOL)_isFirstPay;
- (void)_trackCollectPromptDidShowWithReason:(id)a0;
- (void)_trueShowPrompt:(id)a0 containerView:(id)a1 atView:(id)a2 position:(unsigned long long)a3 centerOffset:(double)a4 arrowCenterOffset:(double)a5 dismissTime:(long long)a6;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_todayString;

@end
