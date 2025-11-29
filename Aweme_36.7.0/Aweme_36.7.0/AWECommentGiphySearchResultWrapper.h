@class NSArray, NSString;

@interface AWECommentGiphySearchResultWrapper : NSObject

@property (nonatomic) BOOL isLoadingMore;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *searchKeyword;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (nonatomic) long long type;

- (void).cxx_destruct;

@end
