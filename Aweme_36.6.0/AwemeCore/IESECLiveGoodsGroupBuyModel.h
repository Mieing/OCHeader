@class NSString, NSArray, NSNumber, NSMutableArray;

@interface IESECLiveGoodsGroupBuyModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *prefixURL;
@property (retain, nonatomic) NSArray *avatars;
@property (retain, nonatomic) NSNumber *joinedSize;
@property (retain, nonatomic) NSNumber *groupSize;
@property (retain, nonatomic) NSNumber *percent;
@property (retain, nonatomic) NSString *groupID;
@property (retain, nonatomic) NSString *buttonLabel;
@property (retain, nonatomic) NSMutableArray *iconsURLStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)contentTextsWithCampaign:(id)a0;
- (void).cxx_destruct;

@end
