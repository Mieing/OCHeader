@class WxaSyncBaseCmd, NSMutableArray;

@interface WxaSyncJsApiControlBytesCmd : WXPBGeneratedMessage

@property (retain, nonatomic) WxaSyncBaseCmd *base;
@property (nonatomic) BOOL forceUpdate;
@property (retain, nonatomic) NSMutableArray *appidList;

+ (void)initialize;

@end
