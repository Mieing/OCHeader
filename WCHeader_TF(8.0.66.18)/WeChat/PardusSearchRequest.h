@class ChildMode, NSString, PardusSearchRequest_SearchClickItem, PardusSearchRequest_ClickContextInfo, LbsLocationNew, NSMutableArray;

@interface PardusSearchRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) LbsLocationNew *location;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) int pardusSwitch;
@property (nonatomic) unsigned int h5Version;
@property (nonatomic) unsigned int darkMode;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int businessType;
@property (retain, nonatomic) ChildMode *childMode;
@property (nonatomic) unsigned int webSearchH5Version;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) PardusSearchRequest_ClickContextInfo *clickContext;
@property (retain, nonatomic) NSMutableArray *extReqParams;
@property (retain, nonatomic) NSMutableArray *searchClickHistory;
@property (retain, nonatomic) PardusSearchRequest_SearchClickItem *prefixLocalClickInfo;
@property (retain, nonatomic) NSMutableArray *sugPrefixSequence;

+ (void)initialize;

@end
