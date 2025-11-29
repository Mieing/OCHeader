@class NSNumber, NSString;

@interface AWELuckyCatPopupIcon : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *size;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSNumber *radius;
@property (copy, nonatomic) NSNumber *padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
