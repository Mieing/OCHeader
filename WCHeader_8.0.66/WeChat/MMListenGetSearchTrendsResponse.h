@class NSString, NSMutableArray, BaseResponse;

@interface MMListenGetSearchTrendsResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *searchTrendItems;
@property (retain, nonatomic) NSString *listenInfo;
@property (retain, nonatomic) NSString *searchInfo;
@property (nonatomic) unsigned long long timeGap;

+ (void)initialize;

@end
