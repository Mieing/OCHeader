@class NSString, NSArray, AWESearchHotSpotRelatedVSProgramLiveModel, AWESearchHotSpotRelatedVSProgramUserModel, AWESearchHotSpotRelatedVSProgramVideoModel;

@interface AWESearchHotSpotRelatedInfoModel : AWEBaseApiModel

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSArray *backgroundList;
@property (retain, nonatomic) AWESearchHotSpotRelatedVSProgramVideoModel *vsVideoModel;
@property (retain, nonatomic) AWESearchHotSpotRelatedVSProgramLiveModel *vsLiveModel;
@property (retain, nonatomic) AWESearchHotSpotRelatedVSProgramUserModel *vsUserModel;

+ (id)userListJSONTransformer;
+ (id)backgroundListJSONTransformer;
+ (id)vsVideoModelJSONTransformer;
+ (id)vsLiveModelJSONTransformer;
+ (id)vsUserModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
