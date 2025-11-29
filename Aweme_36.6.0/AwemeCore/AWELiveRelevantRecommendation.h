@class AWEURLModel, NSString, NSArray, AWELiveRoomWhiteCategoryInfo, AWELiveRelevantRecommendationVSInfo;

@interface AWELiveRelevantRecommendation : AWEBaseApiModel

@property (nonatomic) long long relevantType;
@property (nonatomic) long long bottomBarCategory;
@property (retain, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *barTextPrefix;
@property (copy, nonatomic) NSString *barTextPostfix;
@property (retain, nonatomic) AWELiveRelevantRecommendationVSInfo *vsInfo;
@property (retain, nonatomic) NSArray *liveRoomsInfo;
@property (retain, nonatomic) AWELiveRoomWhiteCategoryInfo *whiteCategoryInfo;
@property (nonatomic) BOOL hadShown;

- (id)initWithRelevantRecommendation:(id)a0;
- (void).cxx_destruct;

@end
