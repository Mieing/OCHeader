@class NSString;

@interface AWEDTOTranscodingModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double bitrate;
@property (nonatomic) long long outputWidth;
@property (nonatomic) long long outputHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
