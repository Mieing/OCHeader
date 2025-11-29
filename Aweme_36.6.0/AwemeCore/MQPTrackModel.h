@class NSString, NSMutableString;

@interface MQPTrackModel : NSObject <NSCoding>

@property (copy, nonatomic) NSString *orderInfo;
@property (copy, nonatomic) NSString *appInfo;
@property (copy, nonatomic) NSString *sdkInfo;
@property (copy, nonatomic) NSString *tidInfo;
@property (copy, nonatomic) NSString *devInfo;
@property (copy, nonatomic) NSMutableString *errorTrack;
@property (retain, nonatomic) NSMutableString *normalTracks;
@property (retain, nonatomic) NSString *aplinktoken;
@property (retain, nonatomic) NSString *apiInvokeTs;
@property (retain, nonatomic) NSString *callType;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *logTime;

- (id)initWithOrderInfo:(id)a0;
- (void)addErrorTrack:(id)a0;
- (void)addNormalTrack:(id)a0;
- (id)appendTracks:(id)a0 withTrack:(id)a1;
- (id)getTrackLogData;
- (BOOL)shouldUpload;
- (id)fetchOrderInfo:(id)a0;
- (id)fetchAppInfo;
- (id)fetchSdkInfo;
- (id)fetchTidInfo;
- (id)fetchDevInfo;
- (id)fetchTrackNo;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)date;

@end
