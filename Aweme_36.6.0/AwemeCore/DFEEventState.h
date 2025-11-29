@class NSString, NSDictionary;

@interface DFEEventState : NSObject

@property (readonly) NSString *monitorId;
@property (copy, nonatomic) NSString *stage;
@property (retain, nonatomic) NSDictionary *event;

+ (id)stateWithEvent:(id)a0 atStage:(id)a1;

- (void).cxx_destruct;

@end
