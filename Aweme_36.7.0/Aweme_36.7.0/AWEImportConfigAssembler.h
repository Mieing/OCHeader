@class APCDTOEditComposerModel, NSString, AWEVideoPublishViewModel;

@interface AWEImportConfigAssembler : NSObject <AWEVideoConfigAssembler>

@property (retain, nonatomic) APCDTOEditComposerModel *config;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isAssetsSupportFastImport:(id)a0;

- (void)prepareOnCompletion:(id /* block */)a0;
- (id)initWithConfig:(id)a0 repository:(id)a1;
- (void).cxx_destruct;

@end
