@class NSString, _TtC15AWEPaySwiftImpl16CCMCardCertModel;

@interface AWEPaySwiftImpl.CCMCardCertModel : MTLModel <MTLJSONSerializing> {
    void /* function */ aid;
    void /* function */ uid;
    void /* function */ did;
    void /* function */ ccmCardID;
    void /* function */ trafficID;
    void /* function */ deviceCertNo;
    void /* function */ qrcodeMode;
    void /* function */ qrcodeType;
    void /* function */ ccNo;
    void /* function */ ccInfo;
    void /* function */ svrKeyIdx;
    void /* function */ scriptName;
    void /* function */ scriptContent;
    void /* function */ scriptVer;
    void /* function */ scriptSign;
    void /* function */ qrcodeErrRate;
}

@property (nonatomic, copy) NSString *aid;
@property (nonatomic, copy) NSString *uid;
@property (nonatomic, copy) NSString *did;
@property (nonatomic, copy) NSString *ccmCardID;
@property (nonatomic, copy) NSString *trafficID;
@property (nonatomic, copy) NSString *deviceCertNo;
@property (nonatomic, copy) NSString *qrcodeMode;
@property (nonatomic, copy) NSString *qrcodeType;
@property (nonatomic, copy) NSString *ccNo;
@property (nonatomic, copy) NSString *ccInfo;
@property (nonatomic) long long ccUseCount;
@property (nonatomic) long long qrcodeValidTime;
@property (nonatomic) long long qrcodeShowTime;
@property (nonatomic) long long ccValidEndTime;
@property (nonatomic) long long qrcodeMinRefreshTime;
@property (nonatomic) long long svrTimestamp;
@property (nonatomic, copy) NSString *svrKeyIdx;
@property (nonatomic) long long useScript;
@property (nonatomic, copy) NSString *scriptName;
@property (nonatomic, copy) NSString *scriptContent;
@property (nonatomic, copy) NSString *scriptVer;
@property (nonatomic, copy) NSString *scriptSign;
@property (nonatomic) long long qrcodeSize;
@property (nonatomic, copy) NSString *qrcodeErrRate;
@property (nonatomic) BOOL qrcodeDisableRefreshAnimation;
@property (nonatomic) long long nextGetCardCertInfoTimeStamp;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl16CCMCardCertModel *backupCardCertInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
