@class NSString, NSMutableDictionary;

@interface BDREEntryGraphNode : BDREGraphNode

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (nonatomic) BOOL isRegisterParam;
@property (nonatomic) BOOL isCollection;

- (id)valueWithFootPrint:(id)a0;
- (void)travelWithFootPrint:(id)a0;
- (void)connectToConstNode:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;

@end
