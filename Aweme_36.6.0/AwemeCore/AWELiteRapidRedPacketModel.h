@class NSNumber, NSString;

@interface AWELiteRapidRedPacketModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long videoType;
@property (retain, nonatomic) NSNumber *alertRedPacketSecond;
@property (copy, nonatomic) NSString *popupSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
