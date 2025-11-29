@class NSString;

@interface MMFinderLiveStickerTextTemplateFont : NSObject <MMFinderLiveStickerTextTemplateRemoteDeliveredResource>

@property (retain, nonatomic) NSString *backendId;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *resourceUri;
@property (retain, nonatomic) NSString *resourceMd5Hash;
@property (retain, nonatomic) NSString *unextractedResourcePath;
@property (retain, nonatomic) NSString *extractedResourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createLocalSourcedWithResourceId:(id)a0 resourcePath:(id)a1;
+ (id)createRemoteDeliveredWithBackendEntity:(id)a0;

- (void).cxx_destruct;

@end
