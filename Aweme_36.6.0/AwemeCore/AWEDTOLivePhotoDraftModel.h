@class NSString;

@interface AWEDTOLivePhotoDraftModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long mode;
@property (copy, nonatomic) NSString *videoSource;
@property (copy, nonatomic) NSString *imageSource;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *effectPath;
@property (nonatomic) BOOL isSystemlivephotoFromRecord;
@property (copy, nonatomic) NSString *videoFrameImagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
