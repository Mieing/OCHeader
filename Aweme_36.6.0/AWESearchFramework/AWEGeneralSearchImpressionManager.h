@class NSMutableArray, NSMutableDictionary;

@interface AWEGeneralSearchImpressionManager : NSObject

@property (nonatomic) long long maxCount;
@property (retain, nonatomic) NSMutableArray *impressionArray;
@property (retain, nonatomic) NSMutableDictionary *impressionIndexDict;

- (void)addImpressionWithViewModel:(id)a0;
- (id)getImpressionLogData;
- (void).cxx_destruct;
- (id)init;

@end
