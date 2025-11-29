@class NSArray, NSString, AWEPOIFeedUgcSimpleUserModel, NSNumber;

@interface AWEPOIFeedUgcUserInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *userTagsHeight;
@property (retain, nonatomic) AWEPOIFeedUgcSimpleUserModel *userBasicInfo;
@property (retain, nonatomic) NSArray *userTags;
@property (copy, nonatomic) NSString *redirectUrl;
@property (copy, nonatomic) NSString *avatarFrameCenterUrl;
@property (retain, nonatomic) NSArray *cellModeUserTags;
@property (retain, nonatomic) NSArray *picModeUserTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (double)cellModeUserTagSpacing;
- (unsigned long long)cellModeUserTagSplitType;
- (double)picModeUserTagSpacing;
- (unsigned long long)picModeUserTagSplitType;
- (void).cxx_destruct;

@end
