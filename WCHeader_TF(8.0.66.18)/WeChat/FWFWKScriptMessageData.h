@class NSString;

@interface FWFWKScriptMessageData : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) id body;

+ (id)makeWithName:(id)a0 body:(id)a1;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
