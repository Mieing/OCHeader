@class NSString;

@interface BDPBridgeAPI : NSObject

@property (copy, nonatomic) NSString *APIName;
@property (copy, nonatomic) NSString *APINameKey;
@property (nonatomic) long long bdpType;

- (id)initWithName:(id)a0 nameKey:(id)a1;
- (id)initWithName:(id)a0 bdpType:(long long)a1;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;

@end
