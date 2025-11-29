@class NSString, NSDictionary;

@interface IESECSKUTrackerEvent : NSObject

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL forceOnce;
@property (nonatomic) BOOL handlePrefix;

- (id)initWithEventName:(id)a0 extraParams:(id)a1 forceOnce:(BOOL)a2 handlePrefix:(BOOL)a3;
- (void).cxx_destruct;

@end
