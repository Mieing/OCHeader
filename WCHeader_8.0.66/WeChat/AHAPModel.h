@class MetadataModel, NSArray;

@interface AHAPModel : NSObject

@property (nonatomic) long long Version;
@property (retain, nonatomic) MetadataModel *Metadata;
@property (copy, nonatomic) NSArray *Pattern;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
