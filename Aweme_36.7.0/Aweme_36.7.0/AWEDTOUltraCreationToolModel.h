@class NSString;

@interface AWEDTOUltraCreationToolModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isSupportImage;
@property (nonatomic) BOOL isSupportVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
