@class NSString;

@interface AWELongVideoAdPreviewConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isPreview;
@property (nonatomic) double previewDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
