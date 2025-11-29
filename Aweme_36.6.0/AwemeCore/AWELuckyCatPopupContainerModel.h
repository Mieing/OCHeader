@class NSString, NSNumber;

@interface AWELuckyCatPopupContainerModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *bgImageUrl;
@property (retain, nonatomic) NSNumber *width;
@property (retain, nonatomic) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
