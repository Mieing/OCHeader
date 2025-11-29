@class NSDictionary, NSString;

@interface AWEHPEdgeBackConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) double edgeWidth;
@property (retain, nonatomic) NSDictionary *enablePages;
@property (retain, nonatomic) NSDictionary *forbidPages;
@property (nonatomic) BOOL enableAllPages;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
