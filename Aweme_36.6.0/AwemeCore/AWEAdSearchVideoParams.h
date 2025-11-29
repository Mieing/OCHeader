@class NSString;

@interface AWEAdSearchVideoParams : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long searchVideoClickStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
