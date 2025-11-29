@class NSArray, NSError;

@interface AWELoadMoreCompletionData : NSObject

@property (retain, nonatomic) NSArray *list;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL isFooterRefreshing;

- (void).cxx_destruct;

@end
