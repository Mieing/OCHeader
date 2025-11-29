@class NSString, AWEURLModel;

@interface AWEPOIFeedUgcAvatarFrameModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEURLModel *avatarFrameThumb;
@property (copy, nonatomic) NSString *avatarFrameId;
@property (copy, nonatomic) NSString *activityId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
