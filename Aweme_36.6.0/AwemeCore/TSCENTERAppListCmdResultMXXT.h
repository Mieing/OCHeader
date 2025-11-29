@class NSString;

@interface TSCENTERAppListCmdResultMXXT : TSCENTERBaseResultMXXT

@property (retain, nonatomic) NSString *appListVer;
@property (retain, nonatomic) NSString *appListData;
@property (nonatomic) BOOL needRetry;

- (void).cxx_destruct;

@end
