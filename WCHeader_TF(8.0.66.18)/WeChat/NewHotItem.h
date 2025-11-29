@class NSString, NewHotItem_AppInfo, NSMutableArray;

@interface NewHotItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NewHotItem_AppInfo *app;
@property (retain, nonatomic) NSMutableArray *adList;
@property (retain, nonatomic) NSString *externInfo;

+ (void)initialize;

@end
