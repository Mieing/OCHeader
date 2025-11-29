@class NPGenericTemplateService_OC, APCDTOThemeConfig, NSArray, NSDictionary, NSError, NSString;

@interface AWEGeneralPostPreloadTemplateTask : NSObject <AWEGeneralPostPreloadTaskProtocol>

@property (retain, nonatomic) APCDTOThemeConfig *themeConfig;
@property (retain, nonatomic) NPGenericTemplateService_OC *service;
@property (copy, nonatomic) NSArray *themeTemplates;
@property (nonatomic) long long state;
@property (nonatomic) double progress;
@property (copy, nonatomic) NSDictionary *progressExtra;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithThemeConfig:(id)a0;
- (void)trackFetchTemplates:(id)a0 duration:(double)a1 status:(long long)a2 count:(long long)a3 error:(id)a4;
- (void)trackDownloadTemplate:(id)a0 templateID:(id)a1 duration:(double)a2 status:(long long)a3 error:(id)a4;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;

@end
