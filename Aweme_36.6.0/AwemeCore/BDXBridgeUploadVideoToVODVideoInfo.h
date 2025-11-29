@class NSString, NSDictionary;

@interface BDXBridgeUploadVideoToVODVideoInfo : BDXBridgeModel

@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *coverUri;
@property (retain, nonatomic) NSDictionary *metaInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
