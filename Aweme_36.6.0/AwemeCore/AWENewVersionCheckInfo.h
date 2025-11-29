@class NSNumber, NSString;

@interface AWENewVersionCheckInfo : AWEBaseApiModel

@property (retain, nonatomic) NSNumber *tipVersionCode;
@property (retain, nonatomic) NSNumber *latency;
@property (copy, nonatomic) NSString *tipVersionName;
@property (nonatomic) BOOL hasBeta;
@property (retain, nonatomic) NSNumber *preDownloadMaxWaitSeconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *alreadyDownloadTips;
@property (retain, nonatomic) NSNumber *forceUpdate;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *realVersionName;
@property (copy, nonatomic) NSString *tips;
@property (retain, nonatomic) NSNumber *inhouse;
@property (retain, nonatomic) NSNumber *realVersionCode;
@property (copy, nonatomic) NSString *verboseName;
@property (retain, nonatomic) NSNumber *preDownLoad;
@property (copy, nonatomic) NSString *whatsNew;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
