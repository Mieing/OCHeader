@class NSString, EmoticonStoreReportInfo, PersonalDesigner;

@interface MMEmoticonDesignerProfilePageContext : MMEmoticonLiteAppPageContextBase

@property (retain, nonatomic) NSString *designerId;
@property (nonatomic) unsigned int designerUin;
@property (nonatomic) BOOL needLeftNavReturn;
@property (nonatomic) BOOL needJmp2SingleEmoji;
@property (retain, nonatomic) NSString *oldRedirectUrl;
@property (retain, nonatomic) PersonalDesigner *personalDesigner;
@property (retain, nonatomic) NSString *sdkRequestID;
@property (nonatomic) int enterHasRedDot;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ addNewPackageBlock;
@property (copy, nonatomic) id /* block */ viewDetailBlock;
@property (retain, nonatomic) EmoticonStoreReportInfo *reportInfo;

- (BOOL)isValid;
- (id)pageCreator;
- (BOOL)allowsInEmoticonLimited;
- (void).cxx_destruct;

@end
