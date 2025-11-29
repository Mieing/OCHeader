@class NSString;

@interface HMDHTTPRequestInfo : NSObject

@property (nonatomic) BOOL isURLInBlockList;
@property (nonatomic) BOOL isURLInAllowedList;
@property (nonatomic) BOOL isSDKURLInAllowedList;
@property (nonatomic) BOOL isHeaderInAllowedList;
@property (nonatomic) BOOL isHitMovingLine;
@property (nonatomic) BOOL isMovingLine;
@property (nonatomic) BOOL isURLInBlockList;
@property (nonatomic) BOOL isURLInAllowedList;
@property (nonatomic) BOOL isSDKURLInAllowedList;
@property (nonatomic) BOOL isHeaderInAllowedList;
@property (nonatomic) BOOL isHitMovingLine;
@property (nonatomic) BOOL isMovingLine;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long hasTriedTimes;
@property (copy, nonatomic) NSString *requestScene;
@property (copy, nonatomic) NSString *webviewURL;
@property (copy, nonatomic) NSString *webviewChannel;

+ (id)nextRequestID;

- (void).cxx_destruct;
- (id)init;

@end
