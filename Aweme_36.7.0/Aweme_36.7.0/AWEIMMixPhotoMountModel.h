@class AWEIMMixPhotoChallengeInfo, AWEIMMixPhotoAnchorInfo, NSArray, NSString, AWEIMMixPhotoJumpInfo;

@interface AWEIMMixPhotoMountModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEIMMixPhotoChallengeInfo *challengeInfo;
@property (retain, nonatomic) AWEIMMixPhotoAnchorInfo *anchorInfo;
@property (retain, nonatomic) AWEIMMixPhotoJumpInfo *jumpInfo;
@property (copy, nonatomic) NSArray *styleIdList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)anchorInfoJSONTransformer;
+ (id)challengeInfoJSONTransformer;
+ (id)jumpInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
