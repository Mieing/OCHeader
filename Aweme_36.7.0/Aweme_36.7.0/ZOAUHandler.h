@class NSString;

@interface ZOAUHandler : NSObject

@property (nonatomic) BOOL ifIgnoreLoginCache;
@property (nonatomic) BOOL ifIgnoreOauthCache;
@property (nonatomic) BOOL ifGM;
@property (nonatomic) BOOL isDebug;
@property (copy, nonatomic) NSString *ua;

+ (int)GNT;
+ (id)GIP_only4;
+ (void)netFix1;
+ (id)GIPes;
+ (int)getcarrierName;
+ (BOOL)ifCellularDataExists;
+ (id)localRout;
+ (id)makeDic_resultCode:(id)a0 resultMsg:(id)a1 resultSeq:(id)a2;
+ (void)netFix1_preDNS1:(id)a0;
+ (id)qc_Location;
+ (id)sdkVC:(BOOL)a0;
+ (id)sdkVC_Code;
+ (id)uaidRout;
+ (id)uaid_Location;
+ (id)localHost;

- (int)GNT;
- (void)cacheOneLogToSend:(id)a0 time:(double)a1 apiKey:(id)a2 code:(id)a3 nettpye:(int)a4 ifSendNow:(BOOL)a5;
- (unsigned char)localGate;
- (void)loginPre:(double)a0 type:(int)a1 apiKey:(id)a2 RL:(id /* block */)a3;
- (void)loginPre:(double)a0 ua:(id)a1 type:(int)a2 apiKey:(id)a3 RL:(id /* block */)a4 ifDebug:(BOOL)a5 ifGM:(BOOL)a6;
- (void)requestWithType:(int)a0 ip:(id)a1 nettype:(int)a2 apiKey:(id)a3 time:(double)a4 RL:(id /* block */)a5 requestType:(BOOL)a6 sdk_Seq:(id)a7;
- (void)writeCache:(id)a0 type:(int)a1 key4:(id)a2 iv4:(id)a3;
- (void).cxx_destruct;
- (void)dealloc;

@end
