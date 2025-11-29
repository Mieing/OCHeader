@class NSString;

@interface AWELuckyCatPopupTag : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *topRightText;
@property (copy, nonatomic) NSString *bottomRightText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
