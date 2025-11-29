@class NSArray;

@interface BDXBridgeAuthConfig : NSObject

@property (copy, nonatomic) NSArray *jsonObjs;
@property (nonatomic) long long from;
@property (nonatomic) double timerInterval;

- (id)initWithJsonObjs:(id)a0 from:(long long)a1;
- (void).cxx_destruct;

@end
