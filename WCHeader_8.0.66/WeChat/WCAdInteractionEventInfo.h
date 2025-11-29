@class NSArray, NSString, WCAdInteractionDeviceMotionEventHandlePlugin;

@interface WCAdInteractionEventInfo : NSObject <NSCoding>

@property (nonatomic) unsigned long long eventType;
@property (nonatomic) unsigned long long eventSubType;
@property (retain, nonatomic) NSArray *actionIds;
@property (nonatomic) double triggerTime;
@property (retain, nonatomic) NSString *determinationId;
@property (retain, nonatomic) WCAdInteractionDeviceMotionEventHandlePlugin *deviceMotionPlugin;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
