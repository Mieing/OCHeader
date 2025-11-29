@class NSString, NSURL;

@interface ArgusWebViewContext : ArgusBaseAsepctParams

@property (copy, nonatomic) NSString *viewTraceId;
@property (copy, nonatomic) NSString *viewClassName;
@property (copy, nonatomic) NSString *containerClassName;
@property (copy, nonatomic) NSString *containerTraceId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *anniexBid;
@property (readonly, nonatomic) BOOL highRiskSource;
@property (nonatomic) BOOL hasLoadThird;
@property (copy, nonatomic) NSString *entryRequestUrlString;
@property (retain, nonatomic) NSURL *entryRequestUrl;
@property (nonatomic) BOOL entryIsThird;
@property (nonatomic) BOOL enableSCC;
@property (copy, nonatomic) NSString *sccEnableType;
@property (nonatomic) BOOL enableSecLink;
@property (copy, nonatomic) NSString *secLinkScene;

+ (id)getHashId:(id)a0;

- (id)toMonitorDict;
- (void)updateContainerInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithWebView:(id)a0;

@end
