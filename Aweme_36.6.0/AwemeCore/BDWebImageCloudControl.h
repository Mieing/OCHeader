@class BDWebImageCloudConfig;

@interface BDWebImageCloudControl : BDWebImageBaseControl

@property (retain) BDWebImageCloudConfig *infoConfig;

- (id)boeDomain;
- (id)cnDomain;
- (id)sgDomain;
- (id)vaDomain;
- (id)queryStringWithStartUpConfig:(id)a0;
- (Class)mappingClass;
- (id)headerFieldsWithStartUpConfig:(id)a0;
- (BOOL)processingNetObj:(id)a0;
- (Class)infoConfigClass;
- (id)fileName;

@end
