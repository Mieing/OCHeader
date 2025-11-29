@class NSString, NSDictionary;

@interface BDRuleCludeListModel : NSObject

@property (readonly, copy, nonatomic) NSString *ruleKey;
@property (readonly, nonatomic) NSDictionary *includeLists;
@property (readonly, nonatomic) NSDictionary *excludeLists;

- (BOOL)shouldFilterWithParams:(id)a0 withRule:(id)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 key:(id)a1;

@end
