@class NSString, AWEAwemeModel;
@protocol AWEGCPGameDetailPreloadDataDelegate;

@interface AWEGCPGameDetailPreloadData : NSObject

@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *prefixCacheKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (weak, nonatomic) id<AWEGCPGameDetailPreloadDataDelegate> delegate;

- (void)registerPitayaNotification;
- (void)startPreloadIfNeed:(BOOL)a0;
- (id)getRequestModel;
- (void)startPreload:(id)a0;
- (BOOL)targetedCrowdEnablePreload;
- (id)dataPreloadConfig;
- (id)initWithGameID:(id)a0 awemeModel:(id)a1 prefixCacheKey:(id)a2 enterFrom:(id)a3;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
