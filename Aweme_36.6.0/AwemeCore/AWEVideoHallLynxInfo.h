@class NSString;

@interface AWEVideoHallLynxInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rawData;
@property (copy, nonatomic) NSString *lynxSchema;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
