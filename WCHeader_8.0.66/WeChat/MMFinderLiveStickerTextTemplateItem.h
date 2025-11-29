@class NSString;

@interface MMFinderLiveStickerTextTemplateItem : NSObject <MMFinderLiveStickerTextTemplateRemoteDeliveredResource>

@property (retain, nonatomic) NSString *backendId;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *thumbnail;
@property (retain, nonatomic) NSString *resourceId;
@property (retain, nonatomic) NSString *resourceUri;
@property (retain, nonatomic) NSString *resourceMd5Hash;
@property (retain, nonatomic) NSString *unextractedResourcePath;
@property (retain, nonatomic) NSString *extractedResourcePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createDefault;
+ (id)createLocalSourcedWithThumbnailPath:(id)a0 resourceId:(id)a1 resourcePath:(id)a2;
+ (id)createRemoteDeliveredWithBackendEntity:(id)a0;

- (void).cxx_destruct;

@end
