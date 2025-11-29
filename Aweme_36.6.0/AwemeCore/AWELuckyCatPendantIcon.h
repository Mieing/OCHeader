@class NSString;

@interface AWELuckyCatPendantIcon : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned long long iconWidth;
@property (nonatomic) unsigned long long iconHeight;
@property (copy, nonatomic) NSString *iconGravity;
@property (nonatomic) unsigned long long iconMarginLeft;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
