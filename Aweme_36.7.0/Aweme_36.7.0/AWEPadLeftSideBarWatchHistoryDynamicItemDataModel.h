@class NSNumber, NSDictionary, NSString;

@interface AWEPadLeftSideBarWatchHistoryDynamicItemDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *dataType;
@property (copy, nonatomic) NSDictionary *cardData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
