@class NSString, FinderLiveNoticeInfo;

@interface WCFinderJumperLiveNoticeParams : NSObject

@property (retain, nonatomic) FinderLiveNoticeInfo *noticeInfo;
@property (copy, nonatomic) NSString *bypReportChnlExtra;

+ (id)paramsFromLiveReservationNecessaryParams:(id)a0;
+ (id)paramsFromLiveReservationStyle:(id)a0;

- (void).cxx_destruct;

@end
