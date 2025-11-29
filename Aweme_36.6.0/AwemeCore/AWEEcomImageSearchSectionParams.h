@class NSString, AWEEcomSearchResultLoadMoreConfig;

@interface AWEEcomImageSearchSectionParams : NSObject

@property (copy, nonatomic) NSString *searchId;
@property (copy, nonatomic) NSString *searchChannel;
@property (copy, nonatomic) NSString *searchCellLevel;
@property (copy, nonatomic) NSString *currentFormat;
@property (retain, nonatomic) AWEEcomSearchResultLoadMoreConfig *loadMoreConfig;

- (id)initWithLoadMoreConfig:(id)a0;
- (void).cxx_destruct;

@end
