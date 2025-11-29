@class NSString, NSArray;

@interface BDLHopData : NSObject

@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *host;
@property (copy, nonatomic) NSArray *cost;

- (void).cxx_destruct;
- (id)toJSON;

@end
