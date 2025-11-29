@class NSDictionary, NSMutableDictionary;

@interface BDXBridgeRequestCheckUnit : NSObject

@property (copy, nonatomic) NSDictionary *settingsConfig;
@property (retain, nonatomic) NSMutableDictionary *p_needMatches;
@property (retain, nonatomic) NSMutableDictionary *p_needExculdes;
@property (readonly, nonatomic) unsigned long long action;
@property (readonly, copy, nonatomic) NSDictionary *needMatches;
@property (readonly, copy, nonatomic) NSDictionary *needExculdes;

- (id)extractRegExpressionMatch:(BOOL)a0 withRule:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
