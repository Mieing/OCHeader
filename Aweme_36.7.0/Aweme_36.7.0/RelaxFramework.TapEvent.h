@class NSString, NSMutableArray, _TtC14RelaxFramework16TouchEventDetail;

@interface RelaxFramework.TapEvent : NSObject {
    void /* function */ type;
}

@property (nonatomic, retain) NSMutableArray *changedTouches;
@property (nonatomic, retain) NSMutableArray *touches;
@property (nonatomic, retain) _TtC14RelaxFramework16TouchEventDetail *detail;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long target;
@property (nonatomic) long long currentTarget;

- (id)initWithChangedTouches:(id)a0 touches:(id)a1 detail:(id)a2 type:(id)a3 timestamp:(long long)a4 target:(long long)a5 currentTarget:(long long)a6;
- (void).cxx_destruct;
- (id)init;

@end
