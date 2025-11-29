@class NSString, CKDownloadInfo_OC, NSArray;

@interface IESEffectAlgorithmModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ep_scene;
@property (copy, nonatomic) NSString *nameSec;
@property (retain, nonatomic) CKDownloadInfo_OC *downloadInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSArray *fileDownloadURLs;
@property (copy, nonatomic) NSString *modelMD5;
@property (nonatomic) long long sizeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)toAlgoURS;
- (id)toDownloadInfo;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
