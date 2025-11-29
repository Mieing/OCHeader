@class NSString, AWEPOICOIDoubleItemDisplayStyleModel, AWEURLModel;

@interface AWEPOICOIDoubleItemDisplayUnitModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *styleType;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) AWEPOICOIDoubleItemDisplayStyleModel *style;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
