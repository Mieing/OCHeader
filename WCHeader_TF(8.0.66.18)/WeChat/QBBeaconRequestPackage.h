@class NSString;
@protocol QBBeaconAnaNSObjTransToJceBufferProtocol;

@interface QBBeaconRequestPackage : NSObject

@property (nonatomic) char platformId;
@property (retain, nonatomic) NSString *appkey;
@property (retain, nonatomic) NSString *appVersion;
@property (retain, nonatomic) NSString *sdkId;
@property (retain, nonatomic) NSString *sdkVersion;
@property (nonatomic) int cmd;
@property (retain, nonatomic) id<QBBeaconAnaNSObjTransToJceBufferProtocol> sBuffer;
@property (retain, nonatomic) NSString *osVer;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) char encryType;
@property (nonatomic) char zipType;
@property (retain, nonatomic) NSString *reserved;
@property (nonatomic) int eventCnt;

+ (id)initWithData:(id)a0 cmd:(int)a1 sBuffer:(id)a2;

- (id)createWUPModel;
- (void)dealloc;
- (void).cxx_destruct;

@end
