@class AWECommentHotspotInfoModel;

@interface AWECommentExtraModel : AWEBaseApiModel

@property (retain, nonatomic) AWECommentHotspotInfoModel *hotspotCommentInfo;
@property (nonatomic) BOOL isFolded;

+ (id)hotspotCommentInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
