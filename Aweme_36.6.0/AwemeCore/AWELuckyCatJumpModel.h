@class NSString;

@interface AWELuckyCatJumpModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpLink;
@property (nonatomic) BOOL closePopup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)init;

@end
