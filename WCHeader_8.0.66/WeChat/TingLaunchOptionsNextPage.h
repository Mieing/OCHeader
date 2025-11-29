@class MMListenCategoryItem, NSString, TingListSourceContext, NSMutableDictionary, NSNumber;

@interface TingLaunchOptionsNextPage : NSObject

@property (nonatomic) unsigned long long nextPageType;
@property (nonatomic) unsigned long long consumeType;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) TingListSourceContext *listContext;
@property (nonatomic) unsigned long long bizType;
@property (retain, nonatomic) NSNumber *locLineType;
@property (copy, nonatomic) NSString *fromFinderFeedId;
@property (retain, nonatomic) NSMutableDictionary *customParams;
@property (copy, nonatomic) NSString *routeName;

+ (id)nextPageWithType:(unsigned long long)a0;

- (id)initWithType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
