@class NSArray, HeMetadataModel;

@interface He2Model : NSObject

@property (retain, nonatomic) HeMetadataModel *Metadata;
@property (copy, nonatomic) NSArray *PatternList;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
