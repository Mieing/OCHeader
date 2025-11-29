@class NSString, NSNumber, NSDictionary;

@interface IESECShopLoadMorePerfInfo : NSObject

@property (nonatomic) double t_load_more_start;
@property (nonatomic) double t_load_more_visible;
@property (nonatomic) double t_load_more_end;
@property (nonatomic) long long loadMoreRangesize;
@property (nonatomic) BOOL loadMoreVisible;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) long long status;
@property (nonatomic) long long errorCode;
@property (nonatomic) unsigned long long errorDomain;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSNumber *index;
@property (copy, nonatomic) NSDictionary *filterParams;

- (void).cxx_destruct;
- (id)toDict;

@end
