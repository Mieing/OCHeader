@class NSString, NSDictionary;

@interface AWELeftSideBarBadgeEnterInfoModel : NSObject

@property (copy, nonatomic) NSString *identification;
@property (copy, nonatomic) NSString *entryBadgeComponentID;
@property (nonatomic) double entryBadgeLastDotTime;
@property (copy, nonatomic) NSDictionary *bizTrackParams;

- (void).cxx_destruct;

@end
