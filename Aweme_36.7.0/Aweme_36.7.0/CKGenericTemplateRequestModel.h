@class NSString;

@interface CKGenericTemplateRequestModel : CKBaseRequestModel

@property (copy, nonatomic) NSString *featureList;
@property (copy, nonatomic) NSString *templateVersion;
@property (copy, nonatomic) NSString *cutsameSDKVersion;
@property (nonatomic) BOOL showFilteredTemplates;
@property (copy, nonatomic) NSString *recommendList;
@property (copy, nonatomic) NSString *cursorList;
@property (copy, nonatomic) NSString *countList;
@property (copy, nonatomic) NSString *imageUrl;
@property (copy, nonatomic) NSString *materialInfos;

- (void).cxx_destruct;

@end
