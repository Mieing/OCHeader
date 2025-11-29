@class NSArray, NSString, AWETemplateTagsLabelTabGuideInfo;

@interface AWETemplateTagsLabelDetailData : AWEBaseApiModel

@property (copy, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSArray *commentList;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *recommendReason;
@property (copy, nonatomic) NSString *extra;
@property (retain, nonatomic) AWETemplateTagsLabelTabGuideInfo *tabGuideInfo;

+ (id)commentListJSONTransformer;
+ (id)userListJSONTransformer;
+ (id)tabGuideInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
