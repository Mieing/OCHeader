@class NSString, LiteAppReferrerInfo, NSDictionary, MMUIViewController, LiteAppStore;
@protocol MMLiteAppHalfScreenStatusChangeListener;

@interface OpenLiteAppInfo : NSObject

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *page;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *checkMode;
@property (nonatomic) BOOL isTransparent;
@property (nonatomic) BOOL waitDownload;
@property (nonatomic) BOOL checkUpdate;
@property (nonatomic) BOOL syncCheck;
@property (nonatomic) BOOL forbidRightGesture;
@property (nonatomic) BOOL openWithNewTab;
@property (nonatomic) unsigned long long openType;
@property (nonatomic) BOOL enableDragToCloseInHalfScreen;
@property (nonatomic) BOOL enableDragToFullScreenInHalfScreen;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) double height;
@property (nonatomic) BOOL useOpenInfoDeviceHW;
@property (nonatomic) double deviceHeight;
@property (nonatomic) double deviceWidth;
@property (copy, nonatomic) id /* block */ whenClosed;
@property (retain, nonatomic) id<MMLiteAppHalfScreenStatusChangeListener> halfScreenStatusChangeListener;
@property (retain, nonatomic) NSString *minVersion;
@property (nonatomic) BOOL withDownloadLoading;
@property (nonatomic) double delayTime;
@property (nonatomic) BOOL forbidAutoresizingMask;
@property (retain, nonatomic) LiteAppReferrerInfo *referrerInfo;
@property (retain, nonatomic) LiteAppStore *store;
@property (retain, nonatomic) NSDictionary *storeData;
@property (nonatomic) int keepAliveSeconds;
@property (nonatomic) long long keepAliveGroup;
@property (nonatomic) BOOL ignoreAlive;
@property (nonatomic) BOOL isPipMode;
@property (nonatomic) BOOL sizeChangeSnapshot;
@property (nonatomic) BOOL presentsWithTransaction;
@property (weak, nonatomic) MMUIViewController *sourceViewController;
@property (nonatomic) unsigned int fromLiteAppUuid;
@property (nonatomic) unsigned long long fromLitePageId;
@property (retain, nonatomic) NSString *snapshotInitData;

- (id)initWithAppUrl:(id)a0;
- (id)init:(id)a0 page:(id)a1 query:(id)a2;
- (id)initEmbedView:(id)a0 page:(id)a1 query:(id)a2;
- (id)initHalfScreen:(id)a0 page:(id)a1 query:(id)a2 height:(double)a3;
- (id)initWithType:(unsigned long long)a0 appId:(id)a1 page:(id)a2 query:(id)a3;
- (void).cxx_destruct;

@end
