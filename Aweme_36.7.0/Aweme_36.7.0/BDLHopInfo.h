@class NSArray;

@interface BDLHopInfo : NSObject

@property (nonatomic) long long hop;
@property (copy, nonatomic) NSArray *hopDatas;

- (void).cxx_destruct;
- (id)toJSON;

@end
