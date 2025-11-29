@class NSString, IESEffectModel, NSArray;

@interface ACCSideslipEffectDataModelWapper : NSObject <ACCSideslipPropDataModelProtocol>

@property (retain, nonatomic) IESEffectModel *rawModel;
@property (nonatomic) long long prefetchPannelIndex;
@property (readonly, copy, nonatomic) NSString *modelID;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *iconDownloadURLs;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL isDownloaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRawModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
