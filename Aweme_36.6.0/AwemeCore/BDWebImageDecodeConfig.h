@class NSString;

@interface BDWebImageDecodeConfig : NSObject <BDModelCustom>

@property (nonatomic) BOOL downSampleEnabled;
@property (nonatomic) double downSampleImageWidth;
@property (nonatomic) double downSampleImageHeight;
@property (nonatomic) unsigned long long downSampleImageMemory;
@property (nonatomic) BOOL isSystemHeicDecoderFirst;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;


@end
