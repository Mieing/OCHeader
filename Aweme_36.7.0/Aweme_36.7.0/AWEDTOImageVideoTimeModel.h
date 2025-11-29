@class NSString;

@interface AWEDTOImageVideoTimeModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long timeInVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
