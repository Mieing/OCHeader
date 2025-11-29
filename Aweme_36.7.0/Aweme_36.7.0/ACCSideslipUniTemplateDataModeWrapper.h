@class CKGenericTemplateModel, NSString, NSArray;

@interface ACCSideslipUniTemplateDataModeWrapper : NSObject <ACCSideslipPropDataModelProtocol>

@property (retain, nonatomic) CKGenericTemplateModel *templateModel;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (readonly, nonatomic) id rawModel;
@property (nonatomic) long long prefetchPannelIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
