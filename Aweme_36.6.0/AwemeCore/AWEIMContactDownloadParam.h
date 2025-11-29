@class NSString;

@interface AWEIMContactDownloadParam : NSObject

@property (nonatomic) long long maxTime;
@property (nonatomic) long long minTime;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *oldUserID;
@property (nonatomic) long long nextRequestMinTime;
@property (nonatomic) long long requestCount;
@property (nonatomic) BOOL isFirstPageDataOfFullSynchron;
@property (nonatomic) BOOL fromNewUserLogin;
@property (nonatomic) BOOL needSortedInfo;

- (void).cxx_destruct;

@end
