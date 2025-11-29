@class NSString;

@interface WeAppCore.WAReportBackgroundFetchItem : WAReportBaseItem

@property (nonatomic) void /* unknown type, empty encoding */ contactPrefetchWithLocationValue;
@property (nonatomic) void /* unknown type, empty encoding */ commitPrefetchWithLocation;
@property (nonatomic) void /* unknown type, empty encoding */ failedPrefetchWithLocationReason;
@property (nonatomic) void /* unknown type, empty encoding */ requestWeChatLocationAuthCostTimeInMs;
@property (nonatomic) void /* unknown type, empty encoding */ requestWeAppLocationAuthCostTimeInMs;
@property (nonatomic) void /* unknown type, empty encoding */ requestLocationCostTimeInMs;
@property (nonatomic) void /* unknown type, empty encoding */ totalCostTimeBeforePrefetchCgiInMs;
@property (nonatomic) void /* unknown type, empty encoding */ cgiCostTimeInMs;
@property (nonatomic) void /* unknown type, empty encoding */ getResultTotalCostTimeInMs;
@property (nonatomic) void /* unknown type, empty encoding */ veryStartTimeStampInMs;
@property (nonatomic) void /* unknown type, empty encoding */ getResultTimeStampInMs;
@property (nonatomic) void /* unknown type, empty encoding */ isResponseSuccess;
@property (nonatomic) void /* unknown type, empty encoding */ responseDataItemCount;
@property (nonatomic, readonly) NSString *description;

- (int)reportID;
- (id)reportString;
- (id)init;

@end
