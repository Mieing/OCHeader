@class NSArray, NSString, AWEIMEmoticonCollectionListModel;

@interface AWEIMGiphySearchResultWrapper : NSObject

@property (nonatomic) BOOL isLoadingMore;
@property (retain, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *searchKeyword;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long offset;
@property (nonatomic) long long type;
@property (nonatomic) long long total;
@property (retain, nonatomic) AWEIMEmoticonCollectionListModel *listModel;

- (void).cxx_destruct;

@end
