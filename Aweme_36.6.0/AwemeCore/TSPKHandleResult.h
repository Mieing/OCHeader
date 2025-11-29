@class NSString, TSPKEventData;

@interface TSPKHandleResult : NSObject

@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *returnValue;
@property (retain, nonatomic) TSPKEventData *eventData;

- (id)getObjectWithReturnType:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
