@class NSNumber, NSString, NSDictionary;

@interface BDXBridgeStudioComposerExportBasic : BDXBridgeModel

@property (retain, nonatomic) NSNumber *initialScene;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *shootWay;
@property (retain, nonatomic) NSNumber *needCoverBase64;
@property (retain, nonatomic) NSNumber *needExifInfo;
@property (copy, nonatomic) NSDictionary *coreTrackParams;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
