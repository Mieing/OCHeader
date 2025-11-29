@class NSString, WCTableViewCellRightConfig, WCTableViewCellLeftConfig, WCTableViewCellCustomConfig;

@interface WCTableViewCellNormalConfig : WCTableViewCellBaseConfig

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isSelectionMode;
@property (nonatomic) BOOL needDefaultReport;
@property (retain, nonatomic) NSString *pageName;
@property (retain, nonatomic) WCTableViewCellLeftConfig *leftConfig;
@property (retain, nonatomic) WCTableViewCellRightConfig *rightConfig;
@property (retain, nonatomic) WCTableViewCellCustomConfig *customConfig;

- (void).cxx_destruct;

@end
