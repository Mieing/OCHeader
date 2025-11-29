@class NSString, NSDictionary;

@interface BDXBridgeUploadImagesToImageXImageInfos : BDXBridgeModel

@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSDictionary *metaInfo;
@property (copy, nonatomic) NSDictionary *encryptionInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
