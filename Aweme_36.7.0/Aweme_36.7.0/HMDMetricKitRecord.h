@class NSDictionary, NSArray, NSString;

@interface HMDMetricKitRecord : HMDTrackerRecord

@property (nonatomic) int eventType;
@property (retain, nonatomic) NSDictionary *diagnostic;
@property (retain, nonatomic) NSDictionary *binaryImages;
@property (retain, nonatomic) NSDictionary *recentAppImages;
@property (retain, nonatomic) NSDictionary *historyAppImageInfo;
@property (retain, nonatomic) NSDictionary *historyPreAppImageInfo;
@property (retain, nonatomic) NSDictionary *metric;
@property (retain, nonatomic) NSDictionary *commitIDs;
@property (retain, nonatomic) NSArray *currentImageBaseInfoList;
@property (nonatomic) BOOL isExceptionBeforeHeimdallr;
@property (nonatomic) BOOL isExceptionUploadBeforeHeimdallr;
@property (copy, nonatomic) NSString *selfMonitorKey;

+ (id)tableName;

- (void).cxx_destruct;
- (id)reportDictionary;

@end
