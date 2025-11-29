@class NSArray, AWEIMWorkSpaceDetailNoticeModel, AWEIMWorkSpaceDetailFilterInfoModel;

@interface AWEIMWorkSpaceDetailResponse : AWEBaseApiModel

@property (nonatomic) long long nextCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long detailUnread;
@property (copy, nonatomic) NSArray *missionCell;
@property (copy, nonatomic) NSArray *recommendMission;
@property (copy, nonatomic) NSArray *convCell;
@property (retain, nonatomic) AWEIMWorkSpaceDetailFilterInfoModel *missionFilterInfo;
@property (retain, nonatomic) AWEIMWorkSpaceDetailNoticeModel *missionNoticeInfo;

+ (id)missionFilterInfoJSONTransformer;
+ (id)missionCellJSONTransformer;
+ (id)recommendMissionJSONTransformer;
+ (id)convCellJSONTransformer;
+ (id)missionNoticeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
