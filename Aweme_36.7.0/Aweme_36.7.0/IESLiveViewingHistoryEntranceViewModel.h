@class HTSEventContext;

@interface IESLiveViewingHistoryEntranceViewModel : NSObject

@property (retain, nonatomic) HTSEventContext *trackContext;
@property (copy, nonatomic) id /* block */ entranceEnent;

- (BOOL)firstShow;
- (id)initWithTrackContext:(id)a0 entranceEnent:(id /* block */)a1;
- (void)trackHistoryShow;
- (void)clickHistoryButton;
- (id)yellowPointTipViewKey;
- (void)trackHistoryClick;
- (void)trackHistory:(id)a0;
- (BOOL)isShowBubbleGuide;
- (void).cxx_destruct;

@end
