@class NSString, NSNumber, NSDictionary;

@interface IESLiveAnchorTabLabelChangeModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *afterPoiName;
@property (retain, nonatomic) NSNumber *beforePoiID;
@property (retain, nonatomic) NSNumber *afterPoiID;
@property (retain, nonatomic) NSNumber *fallbackTabType;
@property (retain, nonatomic) NSDictionary *degradeTabType;
@property (retain, nonatomic) NSDictionary *anchorTabLabel;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
