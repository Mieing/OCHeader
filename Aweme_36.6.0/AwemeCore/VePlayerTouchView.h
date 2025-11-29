@class NSMutableDictionary, NSObject;
@protocol VePlayerTouchViewDelegate;

@interface VePlayerTouchView : UIView

@property (retain, nonatomic) NSMutableDictionary *pointerDict;
@property (nonatomic) unsigned long long gameType;
@property (weak, nonatomic) NSObject<VePlayerTouchViewDelegate> *delegate;

- (id)pointerIdArray;
- (void)processTouches:(id)a0 event:(id)a1 touchState:(unsigned long long)a2;
- (void)sendEventList:(id)a0 withAction:(long long)a1;
- (void).cxx_destruct;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)didAddSubview:(id)a0;
- (id)init;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;

@end
