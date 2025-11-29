@class NSString, SCCWebSettings, NSDictionary, NSDate, NSMutableArray;
@protocol SCCWebViewCustomHandler;

@interface SCCWebViewConfiguration : NSObject

@property (nonatomic) BOOL needCloudChecking;
@property (nonatomic) BOOL hasBeenReach;
@property (retain, nonatomic) NSString *logID;
@property (nonatomic) unsigned long long reportType;
@property (retain, nonatomic) id<SCCWebViewCustomHandler> customHandler;
@property (retain, nonatomic) NSDate *cloudCheckBeginTime;
@property (retain, nonatomic) SCCWebSettings *settings;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSString *blockStyle;
@property (retain, nonatomic) NSString *seclinkScene;
@property (retain, nonatomic) NSDictionary *extra;
@property (retain, nonatomic) NSString *preHost;
@property (retain, nonatomic) NSString *bid;
@property (retain, nonatomic) NSMutableArray *allowOnceUrls;

- (void).cxx_destruct;
- (id)init;

@end
