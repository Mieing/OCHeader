@class BDWebImageAuthorizationConfig;

@interface BDWebImageAuthorizationControl : BDWebImageBaseControl

@property (retain) BDWebImageAuthorizationConfig *infoConfig;

- (id)boeDomain;
- (id)cnDomain;
- (id)sgDomain;
- (id)vaDomain;
- (id)queryStringWithStartUpConfig:(id)a0;
- (Class)mappingClass;
- (id)fileName;

@end
