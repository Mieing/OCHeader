@class NSString, MMUIWindow, NSDate, NSObject;
@protocol WCYoDelegate;

@interface WCYoWindowController : MMWindowController <WCYoWindowDelegate> {
    MMUIWindow *_window;
}

@property (weak, nonatomic) NSObject<WCYoDelegate> *yoDelegate;
@property (retain, nonatomic) NSDate *showedDate;
@property (nonatomic) unsigned int yoTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)window;
- (void)dealloc;
- (void)restartAnimation;
- (void)setupYoWithCount:(unsigned long long)a0 username:(id)a1 type:(int)a2 delegate:(id)a3;
- (void)setupYoWithCount:(unsigned long long)a0 username:(id)a1 type:(int)a2 delegate:(id)a3 nameLabelString:(id)a4 descriptionString:(id)a5 allowReply:(BOOL)a6;
- (void)setupYoWithCount:(unsigned long long)a0 username:(id)a1 type:(int)a2 delegate:(id)a3 nameLabelString:(id)a4 descriptionString:(id)a5 timeString:(id)a6 allowReply:(BOOL)a7;
- (void)addYoCount:(unsigned long long)a0 forUsername:(id)a1 type:(int)a2;
- (void)showWindowAnimateType:(int)a0 withTransitionAnimation:(int)a1;
- (id)window:(id)a0 hitTest:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)hideYoWindow:(id)a0;
- (void)setWindow:(id)a0;
- (void).cxx_destruct;

@end
