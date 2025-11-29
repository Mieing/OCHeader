@class NSMutableDictionary;

@interface AWEFilterDetailManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *filterDetailDict;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
