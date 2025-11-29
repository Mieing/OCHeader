@class NSString;

@interface AWECommentFeatureModel : AWEBaseFeatureModel

@property (copy, nonatomic) NSString *comment_id;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *group_id;
@property (nonatomic) long long is_cold_start;
@property (nonatomic) long long is_hot;
@property (nonatomic) long long is_author;
@property (nonatomic) long long comment_duration;
@property (nonatomic) long long content_type;
@property (nonatomic) long long comment_staytime;
@property (nonatomic) unsigned long long comment_act;

+ (id)supportFeatureKeys;

- (void)updateFeature:(id)a0 forKey:(id)a1 extra:(id)a2;
- (void).cxx_destruct;

@end
