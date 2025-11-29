@class NSNumber, NSString;

@interface BizMenuButtonInfo : NSObject

@property (retain, nonatomic) NSNumber *identifier;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *state;
@property (retain, nonatomic) NSNumber *type;

+ (id)makeWithIdentifier:(id)a0 key:(id)a1 name:(id)a2 state:(id)a3 type:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
