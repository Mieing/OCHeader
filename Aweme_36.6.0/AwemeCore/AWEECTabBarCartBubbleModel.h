@class NSString, IESECURLModel, NSDictionary, NSNumber;

@interface AWEECTabBarCartBubbleModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSDictionary *bizParams;
@property (copy, nonatomic) NSString *exposureParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
