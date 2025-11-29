@class NSDictionary, NSMutableDictionary;

@interface LynxTouchEvent : LynxEvent

@property (readonly, nonatomic) struct CGPoint { double x; double y; } clientPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } pagePoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } viewPoint;
@property (readonly, nonatomic) BOOL isMultiTouch;
@property (readonly, nonatomic) NSDictionary *touchMap;
@property (readonly, nonatomic) NSMutableDictionary *uiTouchMap;
@property (retain, nonatomic) NSMutableDictionary *activeUIMap;

- (id)getEventParams;
- (id)initWithName:(id)a0 targetTag:(long long)a1 clientPoint:(struct CGPoint { double x0; double x1; })a2 pagePoint:(struct CGPoint { double x0; double x1; })a3 viewPoint:(struct CGPoint { double x0; double x1; })a4;
- (id)initWithName:(id)a0 targetTag:(long long)a1 touchMap:(id)a2;
- (id)initWithName:(id)a0 targetTag:(long long)a1;
- (id)initWithName:(id)a0 targetTag:(long long)a1 touchPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithName:(id)a0 uiTouchMap:(id)a1;
- (void).cxx_destruct;

@end
