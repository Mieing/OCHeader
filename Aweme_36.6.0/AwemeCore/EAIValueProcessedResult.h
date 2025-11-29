@class NSString;

@interface EAIValueProcessedResult : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) float value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(float)a1;

@end
