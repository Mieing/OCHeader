@class NSString;

@interface AWEAnchorUIInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long markCornerRadius;
@property (copy, nonatomic) NSString *markLabelTextColor;
@property (copy, nonatomic) NSString *containerViewBackgroundColor;
@property (copy, nonatomic) NSString *seperateLineBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
