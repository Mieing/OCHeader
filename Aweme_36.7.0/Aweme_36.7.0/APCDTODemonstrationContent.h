@class NSString;

@interface APCDTODemonstrationContent : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *videoUrl;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)syncToPublishViewModel:(id)a0;
- (void).cxx_destruct;

@end
