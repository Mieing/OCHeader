@class GPBInt32Array, NSString, NSMutableArray;

@interface EntPreAccessDataStructV2 : GPBMessage

@property (nonatomic) int chargeCount;
@property (nonatomic) BOOL hasChargeCount;
@property (retain, nonatomic) GPBInt32Array *chargeEpisodesArray;
@property (readonly, nonatomic) unsigned long long chargeEpisodesArray_Count;
@property (copy, nonatomic) NSString *brandId;
@property (nonatomic) BOOL hasBrandId;
@property (copy, nonatomic) NSString *brandName;
@property (nonatomic) BOOL hasBrandName;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL hasEndTime;
@property (retain, nonatomic) NSMutableArray *showReportLinkArray;
@property (readonly, nonatomic) unsigned long long showReportLinkArray_Count;
@property (retain, nonatomic) NSMutableArray *clickReportLinkArray;
@property (readonly, nonatomic) unsigned long long clickReportLinkArray_Count;

+ (id)descriptor;

@end
