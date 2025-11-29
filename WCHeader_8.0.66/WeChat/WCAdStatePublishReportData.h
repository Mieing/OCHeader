@class NSString, WCAdvertiseInfo;

@interface WCAdStatePublishReportData : NSObject

@property (retain, nonatomic) WCAdvertiseInfo *adInfo;
@property (retain, nonatomic) NSString *snsId;
@property (nonatomic) int scene;

- (void).cxx_destruct;

@end
