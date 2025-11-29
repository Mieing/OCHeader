@class NSString;
@protocol LynxEventTargetBase;

@interface LynxEvent : NSObject

@property (readonly, nonatomic) long long targetSign;
@property (readonly, nonatomic) long long currentTargetSign;
@property (weak, nonatomic) id<LynxEventTargetBase> eventTarget;
@property (readonly, copy, nonatomic) NSString *eventName;
@property (readonly, nonatomic) long long eventType;
@property (nonatomic) double timestamp;
@property (nonatomic) long long eventID;

- (id)getEventParams;
- (id)initWithName:(id)a0 type:(long long)a1 targetSign:(long long)a2 currentTargetSign:(long long)a3;
- (id)initWithName:(id)a0 type:(long long)a1 targetSign:(long long)a2;
- (id)generateEventBody;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 type:(long long)a1;
- (BOOL)canCoalesce;

@end
