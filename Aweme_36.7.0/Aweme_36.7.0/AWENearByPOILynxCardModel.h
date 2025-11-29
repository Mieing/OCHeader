@class AWEPOILynxModel, NSString;

@interface AWENearByPOILynxCardModel : MTLModel <MTLJSONSerializing, AWENearbyInsertCardProtocol>

@property (nonatomic) long long cardType;
@property (nonatomic) long long indexToInsert;
@property (retain, nonatomic) AWEPOILynxModel *lynxData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)identifierForLynxView;
- (void).cxx_destruct;

@end
