@class NSDictionary, NSString;

@interface IESVideoInfoDefaultFormatter : NSObject

@property (copy, nonatomic) NSDictionary *reportKeyMap;
@property (copy, nonatomic) NSString *keyPrefix;

- (id)reportKeyMapper;
- (id)formattedValueForKey:(id)a0 ofVideoInfo:(id)a1;
- (id)dictWithVideoInfos:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
