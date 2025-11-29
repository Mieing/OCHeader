@class NSString;

@interface WCFinderLiveErrorStruct : NSObject

@property (nonatomic) unsigned long long liveId;
@property (nonatomic) unsigned long long errorType;
@property (nonatomic) int errorCode;
@property (retain, nonatomic) NSString *errorInfo;
@property (nonatomic) unsigned long long errorSeverityLevel;
@property (retain, nonatomic) NSString *errorTags;

- (id)toReport;
- (void).cxx_destruct;

@end
