@class NSString, IESLLGDUserInfo, NSArray;

@interface IESLLGDServerUgcRateItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *item_id;
@property (copy, nonatomic) NSString *aweme_id;
@property (nonatomic) BOOL is_anonymous;
@property (nonatomic) BOOL belongs_to_current_user;
@property (retain, nonatomic) IESLLGDUserInfo *user_info;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *impression_phrase;
@property (nonatomic) long long img_show_num;
@property (nonatomic) long long source_type;
@property (retain, nonatomic) NSArray *thumbnails;
@property (retain, nonatomic) NSArray *images;
@property (copy, nonatomic) NSString *ip_province;
@property (copy, nonatomic) NSString *published_time;
@property (copy, nonatomic) NSString *resident_location;
@property (retain, nonatomic) NSArray *content_tags_v2;
@property (nonatomic) long long digged_count;
@property (nonatomic) BOOL has_content_digged_by_request_user;
@property (nonatomic) BOOL has_content_buried_by_request_user;
@property (retain, nonatomic) NSArray *score_tags;
@property (copy, nonatomic) NSString *mob_params;
@property (nonatomic) long long viewed_count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)user_infoJSONTransformer;
+ (id)thumbnailsJSONTransformer;
+ (id)content_tags_v2JSONTransformer;
+ (id)score_tagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)imagesJSONTransformer;

- (void).cxx_destruct;

@end
