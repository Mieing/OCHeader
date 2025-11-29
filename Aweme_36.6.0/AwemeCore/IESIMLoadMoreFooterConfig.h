@class NSString;

@interface IESIMLoadMoreFooterConfig : NSObject

@property (copy, nonatomic) NSString *loadMoreTips;
@property (nonatomic) BOOL needHiddenWhenLoading;
@property (nonatomic) BOOL needShowMore;
@property (nonatomic) BOOL hideNoMoreText;

- (void).cxx_destruct;

@end
