@class NSDictionary, NSString;
@protocol EventChainEvent;

@interface EventChainEventContextBridge : NSObject {
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic) BOOL contextModified;
@property (nonatomic, readonly) id passthrough;
@property (nonatomic, readonly) NSDictionary *params;
@property (nonatomic, readonly) NSString *chainID;
@property (nonatomic, readonly) NSString *chainName;
@property (nonatomic, readonly) id<EventChainEvent> event;
@property (nonatomic, readonly) NSDictionary *eventFields;
@property (nonatomic, readonly) BOOL isContextParamsModified;

- (void)mergeWithSubParams:(id)a0 key:(id)a1;
- (void)mergeWithParams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
