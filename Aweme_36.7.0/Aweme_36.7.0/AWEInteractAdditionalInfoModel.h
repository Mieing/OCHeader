@class AWEInteractAdditionalDiggModel, AWEInteractAdditionalCommentModel;

@interface AWEInteractAdditionalInfoModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AWEInteractAdditionalDiggModel *additionalDigg;
@property (retain, nonatomic) AWEInteractAdditionalCommentModel *additionalComment;

+ (id)additionalDiggJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
