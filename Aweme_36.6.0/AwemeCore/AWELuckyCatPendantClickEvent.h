@class NSString;

@interface AWELuckyCatPendantClickEvent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) NSString *landingType;
@property (nonatomic) long long showStyle;
@property (copy, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
