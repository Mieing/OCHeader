@class NSString, AWELuckyCatPendantDescTemplate;

@interface AWELuckyCatPendantCapsule : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *capsuleType;
@property (retain, nonatomic) AWELuckyCatPendantDescTemplate *title;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
