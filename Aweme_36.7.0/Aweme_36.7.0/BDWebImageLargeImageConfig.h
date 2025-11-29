@class NSString;

@interface BDWebImageLargeImageConfig : NSObject <BDModelCustom>

@property (nonatomic) double fileSizeLimit;
@property (nonatomic) double memoryScaleLimit;
@property (nonatomic) double viewResolutionScaleLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
