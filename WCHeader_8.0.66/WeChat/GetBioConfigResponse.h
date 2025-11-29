@class CdnInfo, NetworkSectResp, NSData, BaseResponse;

@interface GetBioConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long bioId;
@property (retain, nonatomic) NSData *cfgbuffer;
@property (retain, nonatomic) NetworkSectResp *netWork;
@property (retain, nonatomic) CdnInfo *cdnInfo;
@property (retain, nonatomic) NSData *liveSelectData;
@property (nonatomic) float faceRatio;

+ (void)initialize;

@end
