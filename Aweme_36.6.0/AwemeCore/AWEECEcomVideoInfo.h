@class NSString;

@interface AWEECEcomVideoInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoType;
@property (copy, nonatomic) NSString *videoProductIDs;
@property (copy, nonatomic) NSString *windowProductIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
