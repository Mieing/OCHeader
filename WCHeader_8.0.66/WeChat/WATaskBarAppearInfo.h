@class NSString, CLLocation;

@interface WATaskBarAppearInfo : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) unsigned long long backgroundStatus;
@property (nonatomic) unsigned long long weAppCount;
@property (nonatomic) unsigned long long weMyAppCount;
@property (nonatomic) unsigned long long brandCount;
@property (nonatomic) unsigned long long fileCount;
@property (nonatomic) unsigned long long noteCount;
@property (nonatomic) unsigned long long mpVideoCount;
@property (nonatomic) unsigned long long finderVideoCount;
@property (nonatomic) unsigned long long finderLiveCount;
@property (nonatomic) unsigned long long musicCount;
@property (nonatomic) unsigned long long page;
@property (nonatomic) unsigned long long tingCount;
@property (nonatomic) unsigned long long commuseWeappCount;
@property (nonatomic) unsigned long long isRefresh;
@property (retain, nonatomic) CLLocation *location;
@property (retain, nonatomic) NSString *BSSIDHash;
@property (retain, nonatomic) NSString *SSIDHash;
@property (retain, nonatomic) NSString *overviewExtraData;

- (void).cxx_destruct;

@end
