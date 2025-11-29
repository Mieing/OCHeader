@class NSString, NSMutableDictionary;

@interface WCContactProfileRecommenDataInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *dicProfileRecommen;
@property (retain, nonatomic) NSMutableDictionary *dicEnxposureProfileRecommen;
@property (retain, nonatomic) NSMutableDictionary *dicRecommenHelloToChatMsgInfo;
@property (retain, nonatomic) NSMutableDictionary *dicVerifyEnxposureProfileRecommen;
@property (retain, nonatomic) NSMutableDictionary *dicFailImageDownloadMsgId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_dicProfileRecommen;
+ (void)PBArrayAdd_dicEnxposureProfileRecommen;
+ (void)PBArrayAdd_dicRecommenHelloToChatMsgInfo;
+ (void)PBArrayAdd_dicVerifyEnxposureProfileRecommen;
+ (void)PBArrayAdd_dicFailImageDownloadMsgId;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
