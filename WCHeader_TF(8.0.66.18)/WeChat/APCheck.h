@class NSURLConnection, PublicWifiCache, NSMutableData;
@protocol APCheckDelegate;

@interface APCheck : APBase <PBMessageObserverDelegate>

@property (retain, nonatomic) PublicWifiCache *aCache;
@property (retain, nonatomic) NSURLConnection *connection;
@property (retain, nonatomic) NSMutableData *respData;
@property (nonatomic) long long pingStatusCode;
@property (nonatomic) long long pingCostTimeStart;
@property (weak, nonatomic) id<APCheckDelegate> delegate;
@property (nonatomic) int wifiProtoType;

+ (id)apCheckFromApBase:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)isFromCacheAndValid;
- (id)initWithSsid:(id)a0 mac:(id)a1 cache:(id)a2 scene:(unsigned int)a3 delegate:(id)a4 wifiProtoType:(int)a5;
- (id)initWithSsid:(id)a0 mac:(id)a1 qrCode:(id)a2 cache:(id)a3 scene:(unsigned int)a4 delegate:(id)a5;
- (id)initWithSsid:(id)a0 mac:(id)a1 qrCode:(id)a2 cache:(id)a3 scene:(unsigned int)a4 delegate:(id)a5 sessionKey:(id)a6 wifiProtoType:(int)a7;
- (id)description;
- (void)start;
- (void)initCache;
- (void)cancel;
- (void)didSuccess;
- (void)didFail;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
