@class NSString, AWEPOIFeedUgcAvatarFrameModel, AWEURLModel;

@interface AWEPOIFeedUgcSimpleUserModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) AWEURLModel *avatorThumb;
@property (retain, nonatomic) AWEPOIFeedUgcAvatarFrameModel *avatarFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
