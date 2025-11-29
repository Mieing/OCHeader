@class NSString;

@interface CKGenericTemplateDetailRequestModel : CKBaseRequestModel

@property (copy, nonatomic) NSString *featureList;
@property (copy, nonatomic) NSString *templateVersion;
@property (copy, nonatomic) NSString *cutsameSDKVersion;
@property (nonatomic) BOOL showFilteredTemplates;
@property (copy, nonatomic) NSString *templateIds;
@property (copy, nonatomic) NSString *musicIdList;
@property (copy, nonatomic) NSString *panel;
@property (nonatomic) long long categoryIdentifier;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long action;

- (void).cxx_destruct;

@end
