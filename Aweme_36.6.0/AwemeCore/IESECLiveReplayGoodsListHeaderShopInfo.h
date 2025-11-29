@class NSString;

@interface IESECLiveReplayGoodsListHeaderShopInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long shopID;
@property (retain, nonatomic) NSString *shopName;
@property (retain, nonatomic) NSString *avatarURL;
@property (retain, nonatomic) NSString *browsingTitle;
@property (retain, nonatomic) NSString *jumpURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
