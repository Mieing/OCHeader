@class NSData;

@interface MMLiveCdnStreamErrorReportInfo : NSObject

@property (retain, nonatomic) NSData *qualityTagCacheBuf;
@property (nonatomic) unsigned int failedQualityTag;
@property (nonatomic) BOOL isMainStreamFailed;
@property (nonatomic) BOOL isBackStreamFailed;
@property (nonatomic) int sdkErrCode;
@property (nonatomic) BOOL hasManuallySwitchedStream;
@property (nonatomic) int playerEventId;
@property (nonatomic) unsigned int currentQualityTag;

- (void)resetAllData;
- (void)resetLastPlayEventData;
- (id)generateFinderLiveCdnPlayInfo;
- (void).cxx_destruct;

@end
