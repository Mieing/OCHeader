@class OMJAssetInfo;

@interface WCTemplateMaterialInfo : NSObject

@property (retain, nonatomic) OMJAssetInfo *omjAssetInfo;

+ (id)assetInfoWithPHLocalIdentifier:(id)a0 error:(id *)a1;
+ (id)assetInfoWithMediaFileAtPath:(id)a0 identifier:(id)a1 mediaType:(long long)a2 error:(id *)a3;

- (id)initWithPHLocalIdentifier:(id)a0 error:(id *)a1;
- (id)initWithMediaFileAtPath:(id)a0 identifier:(id)a1 mediaType:(long long)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
