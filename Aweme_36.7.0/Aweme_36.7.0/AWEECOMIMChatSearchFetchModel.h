@class NSString;

@interface AWEECOMIMChatSearchFetchModel : NSObject

@property (nonatomic) long long searchType;
@property (nonatomic) long long frontSearchType;
@property (copy, nonatomic) NSString *theOtherId;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (nonatomic) long long maxFetchCount;
@property (copy, nonatomic) NSString *searchKey;
@property (nonatomic) long long lastSortOrder;
@property (nonatomic) BOOL needShowCountInfo;

- (void).cxx_destruct;

@end
