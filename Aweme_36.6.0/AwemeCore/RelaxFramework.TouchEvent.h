@class NSString, NSMutableArray, _TtC14RelaxFramework16TouchEventDetail;

@interface RelaxFramework.TouchEvent : NSObject {
    void /* function */ type;
}

@property (nonatomic, retain) NSMutableArray *changedTouches;
@property (nonatomic, retain) NSMutableArray *touches;
@property (nonatomic, retain) _TtC14RelaxFramework16TouchEventDetail *detail;
@property (nonatomic, copy) NSString *type;
@property (nonatomic) long long timestamp;
@property (nonatomic) long long target;
@property (nonatomic) long long currentTarget;

- (void).cxx_destruct;
- (id)init;

@end
