@class AWECommentHotspotInfoModel;

@interface AWECommentExtraModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentHotspotInfoModel *hotspotCommentInfo;

+ (id)hotspotCommentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
