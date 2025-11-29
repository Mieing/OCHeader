@class NSString;

@interface ByteBenchContextOC : NSObject

@property (copy, nonatomic) NSString *mDeviceModel;
@property (nonatomic) int mAid;
@property (nonatomic) int mBid;
@property (nonatomic) int mstatus;
@property (copy, nonatomic) NSString *mAppName;
@property (copy, nonatomic) NSString *mAppVersion;
@property (copy, nonatomic) NSString *mDid;
@property (copy, nonatomic) NSString *mUid;
@property (nonatomic) BOOL mBoe;
@property (nonatomic) BOOL mRefactor;
@property (copy, nonatomic) NSString *mBaseUrl;
@property (nonatomic) int mUpdateVersionCode;
@property (copy, nonatomic) NSString *mWorkspace;
@property BOOL isInit;

+ (id)sharedInstance;

- (int)getAid;
- (void)initAllModules:(id)a0;
- (int)initByConfig:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
