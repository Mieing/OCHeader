@class NSString, NSNumber, NSDictionary;

@interface IESECLiveGoodsBackGroundLeftModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSNumber *iconWidth;
@property (retain, nonatomic) NSNumber *iconHeight;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *titleColor;
@property (retain, nonatomic) NSNumber *titleSize;
@property (copy, nonatomic) NSString *jumpURL;
@property (retain, nonatomic) NSDictionary *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
