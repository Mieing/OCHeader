@class NSString;

@interface FTSReportInfo26897 : NSObject

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *searchId;
@property (retain, nonatomic) NSString *suggestionId;
@property (retain, nonatomic) NSString *requestId;
@property (nonatomic) unsigned int actionId;
@property (nonatomic) unsigned int actionType;
@property (nonatomic) unsigned int h5Version;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int sceneType;
@property (retain, nonatomic) NSString *extInfo;
@property (nonatomic) unsigned int isCache;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) unsigned long long timestampmssvr;
@property (retain, nonatomic) NSString *itemInfo;
@property (retain, nonatomic) NSString *docInfo;

- (id)formatItemInfo;
- (id)formatDocInfo;
- (void)report;
- (void).cxx_destruct;

@end
