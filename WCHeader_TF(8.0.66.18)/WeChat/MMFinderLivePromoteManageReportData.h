@class NSString;

@interface MMFinderLivePromoteManageReportData : NSObject

@property (retain, nonatomic) NSString *businessId;
@property (nonatomic) long long actionType;
@property (nonatomic) int advertisementType;

+ (id)getPromoteManageReportDataWithPromoteItem:(id)a0;

- (void).cxx_destruct;

@end
