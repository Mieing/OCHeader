@class NSMutableSet;

@interface IESECLigoEventHandler : NSObject

@property (retain, nonatomic) NSMutableSet *registeredEvents;

- (void)publishEvent:(id)a0 params:(id)a1;
- (void).cxx_destruct;
- (void)registerEvent:(id)a0;
- (id)init;

@end
