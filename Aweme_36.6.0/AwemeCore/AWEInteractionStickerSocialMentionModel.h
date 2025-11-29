@class NSString, AWEURLModel;

@interface AWEInteractionStickerSocialMentionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *signature;
@property (nonatomic) long long followStatus;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)avatarThumbJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
