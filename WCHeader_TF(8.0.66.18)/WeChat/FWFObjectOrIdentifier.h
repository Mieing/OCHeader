@interface FWFObjectOrIdentifier : NSObject

@property (retain, nonatomic) id value;
@property (nonatomic) BOOL isIdentifier;

+ (id)makeWithValue:(id)a0 isIdentifier:(BOOL)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
