@class NSString, NSMutableDictionary;

@interface GXTemplateSource : NSObject <GXTemplateSourceProtocal>

@property (retain, nonatomic) NSMutableDictionary *bizRegisterMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getTemplateInfoWithTemplateItem:(id)a0;
- (BOOL)registerTemplateServiceWithBizId:(id)a0 templateBundlePath:(id)a1;
- (BOOL)unRegisterTemplateServiceWithBizId:(id)a0;
- (id)loadTemplateBundlePathForBizId:(id)a0;
- (void).cxx_destruct;
- (long long)priority;

@end
