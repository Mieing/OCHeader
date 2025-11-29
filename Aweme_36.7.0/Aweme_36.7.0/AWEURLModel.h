@class NSString, NSArray, AWECodeGenCompressedUrlListModel, AWECodeGenImagePreviewModel;

@interface AWEURLModel : MTLModel <IESLLFuseURLModel, MTLJSONSerializing, AWEProcessRequestInfoProtocol> {
    NSArray *URLList;
    BOOL needsParametersWhenInitialized;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *originURLList;
@property (copy, nonatomic) NSArray *whiteKeys;
@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (copy, nonatomic) NSString *playerAccessKey;
@property (retain, nonatomic) AWECodeGenCompressedUrlListModel *compressedUrlListModel;
@property (retain, nonatomic) AWECodeGenImagePreviewModel *coverPreviewModel;
@property (nonatomic) double sizeByte;
@property (copy, nonatomic) NSString *URI;
@property (readonly, copy, nonatomic) NSString *fileCs;
@property (readonly, copy, nonatomic) NSString *URLKey;
@property (readonly, copy, nonatomic) NSString *fileHash;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLString:(id)a0 appendCommonParams:(id)a1;
+ (id)modelCustomPropertyMapper;
+ (void)setDidFinishInitBlock:(id /* block */)a0;
+ (void)setShouldChangeCommonParamsBlock:(id /* block */)a0;
+ (void)setFilterCommonParamsBlock:(id /* block */)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getDYYYSrcURLDownload;
- (id)initWithURLList:(id)a0;
- (id)URLList;
- (id)recommendUrl;
- (void)setRestoreURLList:(id)a0;
- (void)processRequestID:(id)a0;
- (void)convertUrlListAddCommonParams;
- (void)convertUrlListAddCommonParams;
- (id)getURLDict;
- (void)setNeedsParametersWhenInitializedWithAllowList:(id)a0;
- (id)JSONDictionaryWithoutCommonParameters;
- (void)convertUrlListAddAnimatedCoverParams:(id)a0;
- (BOOL)isEqualByURI:(id)a0;
- (void)filterPlayURLList;
- (id)iesimURLModel;
- (BOOL)needsCommonParametersForURL:(id)a0;
- (id)f_URLList;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;

@end
