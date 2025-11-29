@class NSString, NSArray;

@interface IESEffectResourceModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *resourceURI;
@property (readonly, copy, nonatomic) NSArray *fileDownloadURLs;
@property (readonly, copy, nonatomic) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)genFileDownloadURLsWithURLPrefixes:(id)a0;
- (void).cxx_destruct;

@end
