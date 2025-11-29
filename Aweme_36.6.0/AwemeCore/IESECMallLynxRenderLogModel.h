@class NSString, NSDictionary;

@interface IESECMallLynxRenderLogModel : NSObject

@property (nonatomic) long long status;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMsg;
@property (copy, nonatomic) NSString *templateUrl;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) double lynxWillStartLoading;
@property (nonatomic) double lynxRenderStart;
@property (nonatomic) double lynxStartFetchResource;
@property (copy, nonatomic) NSString *lynxFetchResourceWay;
@property (nonatomic) double lynxEndFetchResource;
@property (nonatomic) double lynxEndLoading;
@property (nonatomic) double lynxRenderEnd;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *sectionId;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isPreDecode;
@property (copy, nonatomic) NSString *scene;
@property (nonatomic) long long loadmoreRangesize;
@property (copy, nonatomic) NSDictionary *perfDict;
@property (copy, nonatomic) NSString *resAccessKey;
@property (copy, nonatomic) NSString *resChannelName;
@property (copy, nonatomic) NSString *resBundleName;
@property (nonatomic) unsigned long long resVersion;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *sourceUrl;
@property (copy, nonatomic) NSString *cdnUrl;
@property (copy, nonatomic) NSString *logId;

- (id)toParamsDictionary;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)init;

@end
