@class NSObject, NSString, NSArray, NSDictionary, BDPTrackEventInfo, BDPUniqueID, BDPTTCode;
@protocol OS_dispatch_queue;

@interface BDPMetaRequestInfo : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueId;
@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *ideToken;
@property (nonatomic) long long readType;
@property (copy, nonatomic) BDPTrackEventInfo *trackInfo;
@property (copy, nonatomic) NSString *latestVersionNum;
@property (copy, nonatomic) NSString *latestVersionTag;
@property (nonatomic) BOOL isSandBox;
@property (nonatomic) BOOL isTmg;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSString *currentUrl;
@property (copy, nonatomic) NSArray *metaUrls;
@property (copy, nonatomic) NSDictionary *customParam;
@property (copy, nonatomic) NSString *metaCDN;
@property (retain, nonatomic) BDPTTCode *ttcode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callBackQueue;
@property (copy, nonatomic) NSString *previewPluginId;
@property (copy, nonatomic) NSString *previewPluginVersion;

+ (id)metaRequestInfoWithUniqueId:(id)a0 token:(id)a1 ideToken:(id)a2 params:(id)a3 trackInfo:(id)a4 completion:(id /* block */)a5;

- (void).cxx_destruct;

@end
