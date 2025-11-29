@class NSMutableDictionary;

@interface WCSearchGroupScoreCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *dicScore;
@property (retain, nonatomic) NSMutableDictionary *dicFeatures;
@property (retain, nonatomic) NSMutableDictionary *dicLeaf;

- (id)init;
- (void).cxx_destruct;

@end
