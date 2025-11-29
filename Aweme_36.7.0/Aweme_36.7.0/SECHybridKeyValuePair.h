@class NSString;

@interface SECHybridKeyValuePair : NSObject

@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;

- (void).cxx_destruct;

@end
