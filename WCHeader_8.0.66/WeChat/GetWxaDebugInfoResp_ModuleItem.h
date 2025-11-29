@class NSString, NSMutableArray, GetWxaDebugInfoResp_ModuleItem_ClientJsExtInfo;

@interface GetWxaDebugInfoResp_ModuleItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int devKey;
@property (retain, nonatomic) NSString *checkSumMd5;
@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSMutableArray *widgetList;
@property (retain, nonatomic) NSString *entranceModule;
@property (retain, nonatomic) NSMutableArray *moduleList;
@property (retain, nonatomic) GetWxaDebugInfoResp_ModuleItem_ClientJsExtInfo *clientJsExtInfo;

+ (void)initialize;

@end
