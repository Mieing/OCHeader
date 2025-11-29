@class NSString;

@interface AWEInteractionStickerSocialHashtagModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hashtagName;
@property (copy, nonatomic) NSString *hashtagID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
