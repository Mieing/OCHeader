@class NSString;

@interface AWEGDClosePageInterceptor : NSObject

@property (copy, nonatomic) NSString *lsDomain;
@property (nonatomic) BOOL shouldIntercept;
@property (copy, nonatomic) NSString *handle;
@property (nonatomic) long long priority;
@property (nonatomic) BOOL isClosing;
@property (copy, nonatomic) NSString *transactionId;
@property (copy, nonatomic) NSString *componentID;

- (void)notifyGDPageClose;
- (id)initWithDomain:(id)a0 componentID:(id)a1;
- (void)subscribeLifeStorageChangeWithDomainAndComponentID;
- (id)subscribeKey;
- (void)unsubscribeLifeStorageChange;
- (void)updateStatusByNewValue:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
