@class NSString;

@interface AWEDTOSecurityModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *shootPhotoFramePath;
@property (nonatomic) BOOL needUploadAudioFrames;
@property (copy, nonatomic) NSString *secondShootPhotoFramePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
