@class NSArray, NSError, NSObject;
@protocol OS_dispatch_group;

@interface AWEIMFansDisposableRefreshDataLoader : NSObject

@property (nonatomic) BOOL canUseCache;
@property (nonatomic) BOOL hasRefreshedUseServer;
@property (retain, nonatomic) NSArray *cacheFansNotice;
@property (retain, nonatomic) NSArray *serverFansNotice;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) NSError *noticeError;
@property (nonatomic) BOOL byPullDown;

- (void).cxx_destruct;

@end
