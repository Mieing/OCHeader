@class NSString, NSDictionary, AWEFollowingListSecondaryInfoLabelStyleModel;

@interface AWEFollowingListSecondaryInfoModel : AWEBaseApiModel

@property (nonatomic) unsigned long long infoPriority;
@property (copy, nonatomic) NSString *subInfoText;
@property (copy, nonatomic) NSDictionary *infoTrackString;
@property (copy, nonatomic) NSDictionary *infoTrackDict;
@property (nonatomic) unsigned long long subInfoTextType;
@property (copy, nonatomic) NSString *subInfoEcomType;
@property (retain, nonatomic) AWEFollowingListSecondaryInfoLabelStyleModel *labelStyle;
@property (copy, nonatomic) NSString *subInfoTextForSpecialGroup;
@property (nonatomic) long long recallDay;

+ (id)infoTrackDictJSONTransformer;
+ (id)subInfoTextTypeJSONTransformer;
+ (id)infoPriorityJSONTransformer;
+ (id)labelStyleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
