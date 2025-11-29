@class AWECaptionInfoModel, NSArray, AWECaptionAnchorModel, NSString;

@interface AWELinkMatchModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *matchInfos;
@property (retain, nonatomic) AWECaptionInfoModel *captionInfo;
@property (retain, nonatomic) AWECaptionAnchorModel *captionAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)captionInfoJSONTransformer;
+ (id)matchInfosJSONTransformer;
+ (id)captionAnchorJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
