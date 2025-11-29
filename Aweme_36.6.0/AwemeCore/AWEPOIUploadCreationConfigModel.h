@class NSNumber, NSString, AWEPOIUploadCreationVideoExtractConfig;

@interface AWEPOIUploadCreationConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *statusCode;
@property (retain, nonatomic) NSString *statusMsg;
@property (nonatomic) BOOL enablePreUploadVideo;
@property (retain, nonatomic) AWEPOIUploadCreationVideoExtractConfig *videoUploadConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
