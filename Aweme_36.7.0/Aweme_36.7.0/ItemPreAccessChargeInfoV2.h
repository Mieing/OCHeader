@class NSString, NSMutableArray;

@interface ItemPreAccessChargeInfoV2 : GPBMessage

@property (nonatomic) BOOL hasPaid_p;
@property (nonatomic) BOOL hasHasPaid_p;
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
