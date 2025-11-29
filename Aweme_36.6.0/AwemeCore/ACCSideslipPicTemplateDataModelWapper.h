@class ACCPicTemplateModel, NSString, NSArray;

@interface ACCSideslipPicTemplateDataModelWapper : NSObject <ACCSideslipPropDataModelProtocol>

@property (readonly, nonatomic) ACCPicTemplateModel *templateModel;
@property (nonatomic) BOOL isLocalParesedCategory;
@property (retain, nonatomic) NSString *categoryId;
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

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTemplate:(id)a0;

@end
