@class WxaClientPublicLibInfo, BaseRequest, NSString, NSMutableArray;

@interface BatchWxaAttrSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *reqInfoList;
@property (retain, nonatomic) WxaClientPublicLibInfo *publicLib;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *deviceRelease;

+ (void)initialize;

@end
