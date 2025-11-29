@class WxaClientPublicLibInfo, BaseRequest, NSString, NSMutableArray;

@interface BatchWxaAttrSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqInfoList;
@property (retain, nonatomic) WxaClientPublicLibInfo *publicLib;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceRelease;

+ (void)initialize;

- (void)setDeviceRelease:(id)a0;
- (id)deviceRelease;
- (void)setDeviceModel:(id)a0;
- (id)deviceModel;
- (void)setPublicLib:(id)a0;
- (id)publicLib;
- (void)setReqInfoList:(id)a0;
- (id)reqInfoList;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
