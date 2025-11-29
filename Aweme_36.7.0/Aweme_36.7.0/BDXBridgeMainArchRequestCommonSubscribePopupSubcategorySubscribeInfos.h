@class NSString;

@interface BDXBridgeMainArchRequestCommonSubscribePopupSubcategorySubscribeInfos : BDXBridgeModel

@property (copy, nonatomic) NSString *subcategoryId;
@property (copy, nonatomic) NSString *subcategoryName;
@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) BOOL subscribeStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
