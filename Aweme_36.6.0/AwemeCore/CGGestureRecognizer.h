@class NSDictionary, NSMutableDictionary;
@protocol CGCloudPlayer, CGItem;

@interface CGGestureRecognizer : UIGestureRecognizer

@property (weak, nonatomic) id<CGItem> item;
@property (weak, nonatomic) id<CGCloudPlayer> cloudPlayer;
@property (retain, nonatomic) NSMutableDictionary *pointerDict;
@property (nonatomic) BOOL allTouches;
@property (nonatomic) BOOL shouldReceiveEvent;
@property (retain, nonatomic) NSDictionary *preventList;
@property (retain, nonatomic) NSDictionary *bePreventedList;
@property double debugRecordTime;
@property double infoRecordTime;

- (void)sendTouchEvents:(id)a0;
- (BOOL)isLowerSystemVersion;
- (BOOL)strategyWithGestureRecognizer:(id)a0 strategyList:(id)a1 defaultStrategy:(BOOL)a2;
- (void)_touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_touchesMoved:(id)a0 withEvent:(id)a1;
- (void)_touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)_touchesEnded:(id)a0 withEvent:(id)a1;
- (id)allTouches:(id)a0;
- (void)sendEventsWithTouch:(id)a0 event:(id)a1 state:(unsigned long long)a2;
- (void)sendEvent:(id)a0 withType:(unsigned long long)a1 state:(unsigned long long)a2;
- (id)pointerIdArray;
- (id)initWithItem:(id)a0 cloudPlayer:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldReceiveEvent:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)log:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
