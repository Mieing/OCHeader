@class NSString, NSNumber;

@interface IESECLiveCardProductInfoBasic : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *productID;
@property (nonatomic) long long channelID;
@property (nonatomic) long long channelType;
@property (copy, nonatomic) NSString *detailURL;
@property (readonly, nonatomic) NSNumber *shopID;
@property (readonly, nonatomic) NSNumber *itemType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
