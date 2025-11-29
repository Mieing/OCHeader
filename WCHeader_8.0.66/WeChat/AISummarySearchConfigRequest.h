@class ChildMode, NSString, LbsLocationNew, NSMutableArray;

@interface AISummarySearchConfigRequest : WXPBGeneratedMessage

@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int h5Version;
@property (retain, nonatomic) LbsLocationNew *location;
@property (nonatomic) unsigned long long businessType;
@property (retain, nonatomic) NSString *language;
@property (nonatomic) unsigned long long configParam;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) ChildMode *childMode;
@property (retain, nonatomic) NSMutableArray *extReqParams;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
