@class NSArray;

@interface AWEAnchorRecentAddViewModel : NSObject

@property (copy, nonatomic) NSArray *dataSource;
@property (nonatomic) long long anchorType;

- (void)deleteRecentWithAnchorID:(id)a0;
- (void)deleteRecentAddOfAll;
- (void).cxx_destruct;

@end
