@class NSArray;

@interface AWEFeedCacheFeedRequestContext : NSObject

@property (copy, nonatomic) NSArray *awemeList;
@property (nonatomic) unsigned long long status;

- (id)initWithAwemeList:(id)a0 status:(unsigned long long)a1;
- (void).cxx_destruct;

@end
