@class NSString, AWEGDPointData;

@interface AWEGDImagePointModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) AWEGDPointData *pointData;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
