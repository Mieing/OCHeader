@class NSNumber, NSString, NSMutableArray;

@interface AWEFeedSequenceExtendFeatureModel : AWEFeedSequenceFeatureModel

@property (nonatomic) long long social_status;
@property (copy, nonatomic) NSNumber *comment_num;
@property (copy, nonatomic) NSNumber *comment_staytime;
@property (nonatomic) long long tag_level2_id;
@property (copy, nonatomic) NSNumber *play_count;
@property (copy, nonatomic) NSNumber *digg_count;
@property (copy, nonatomic) NSString *challenge_id;
@property (retain, nonatomic) NSMutableArray *comment_list;

+ (id)internalFeatures;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (BOOL)modelCustomTransformToDictionary:(id)a0;
- (void)handleFeatureCommentListWithFeature:(id)a0 key:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
