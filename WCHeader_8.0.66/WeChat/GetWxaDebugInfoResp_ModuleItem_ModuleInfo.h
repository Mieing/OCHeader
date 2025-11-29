@class NSString, NSMutableArray;

@interface GetWxaDebugInfoResp_ModuleItem_ModuleInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *downloadUrl;
@property (retain, nonatomic) NSString *checkSumMd5;
@property (nonatomic) BOOL independent;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned int sourceSize;
@property (retain, nonatomic) NSString *withoutLibMd5;
@property (retain, nonatomic) NSMutableArray *widgetList;

+ (void)initialize;

@end
