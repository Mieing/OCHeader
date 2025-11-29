@class NSString, NSNumber;

@interface BDPVideoDefinitionListItem : BDPBasePluginModel

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSNumber *bitrate;
@property (copy, nonatomic) NSNumber *fileSize;

- (void).cxx_destruct;

@end
