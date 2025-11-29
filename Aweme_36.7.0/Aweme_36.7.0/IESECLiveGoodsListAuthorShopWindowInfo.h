@class NSString, NSDictionary, NSNumber, IESECLiveGoodsListAuthorShopAvatarModel;

@interface IESECLiveGoodsListAuthorShopWindowInfo : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *shopWindowEntrance;
@property (retain, nonatomic) NSString *shopWindowJumpURL;
@property (retain, nonatomic) NSString *suffixEntranceText;
@property (retain, nonatomic) NSNumber *fontSize;
@property (retain, nonatomic) IESECLiveGoodsListAuthorShopAvatarModel *windowAvatar;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
