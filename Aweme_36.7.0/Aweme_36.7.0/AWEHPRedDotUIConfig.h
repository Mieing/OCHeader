@class NSString;

@interface AWEHPRedDotUIConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) double start;
@property (nonatomic) double max;
@property (nonatomic) double min;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValidWithError:(id *)a0;

@end
