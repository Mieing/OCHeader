@class NSArray, HeMetadataModel;

@interface HeModel : NSObject

@property (retain, nonatomic) HeMetadataModel *Metadata;
@property (copy, nonatomic) NSArray *Pattern;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
