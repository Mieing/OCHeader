@class NSArray, NSString, WCFinderRedDotTipsShowInfo, WCFinderDataItem, WCFinderRedDotCtrlInfo;

@interface WCMomentsFinderRecommendationInfo : NSObject

@property (readonly, nonatomic) WCFinderRedDotCtrlInfo *finderCtrlInfo;
@property (readonly, nonatomic) WCFinderRedDotTipsShowInfo *finderShowInfo;
@property (readonly, nonatomic) WCFinderDataItem *finderDataItem;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, copy, nonatomic) NSArray *usernames;
@property (readonly, nonatomic) unsigned long long userCount;
@property (copy, nonatomic) NSString *customizedSeparatorTips;

+ (id)recommendationInfoWithFinderCtrlInfo:(id)a0;

- (id)initWithFinderCtrlInfo:(id)a0;
- (void).cxx_destruct;

@end
