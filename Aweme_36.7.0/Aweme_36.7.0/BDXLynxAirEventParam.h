@class NSString, LynxView;

@interface BDXLynxAirEventParam : NSObject

@property (weak, nonatomic) LynxView *lynxView;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *eventName;
@property (nonatomic) long long targetSign;

- (void).cxx_destruct;

@end
