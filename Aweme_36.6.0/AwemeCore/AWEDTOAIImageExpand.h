@class NSString;

@interface AWEDTOAIImageExpand : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isAiExpaned;
@property (copy, nonatomic) NSString *origImageFilePath;
@property (copy, nonatomic) NSString *origCompressedImageFilePath;
@property (nonatomic) double origImageSizeWidth;
@property (nonatomic) double origImageSizeHeight;
@property (nonatomic) double origImageScale;
@property (nonatomic) BOOL isBackupProjectsOrigImageExpanded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
