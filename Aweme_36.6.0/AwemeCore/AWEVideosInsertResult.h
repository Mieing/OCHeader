@class NSDictionary;

@interface AWEVideosInsertResult : NSObject

@property (nonatomic) unsigned long long insertPage;
@property (nonatomic) BOOL skipURLTransfer;
@property (copy, nonatomic) NSDictionary *loginTrackerInfo;
@property (nonatomic) BOOL requireLogin;

- (id)initWithInsertPage:(unsigned long long)a0 skipURLTransfer:(BOOL)a1 requireLogin:(BOOL)a2;
- (void).cxx_destruct;

@end
