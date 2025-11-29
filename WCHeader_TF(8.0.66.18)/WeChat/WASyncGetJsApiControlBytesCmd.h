@class NSMutableArray;

@interface WASyncGetJsApiControlBytesCmd : WASyncBaseCmd

@property (retain, nonatomic) NSMutableArray *pluginAppidList;
@property (nonatomic) BOOL forceUpdate;

- (void).cxx_destruct;

@end
