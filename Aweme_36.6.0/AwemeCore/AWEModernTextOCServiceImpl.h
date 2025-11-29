@class NSString, NSMutableDictionary;

@interface AWEModernTextOCServiceImpl : HTSService <AWEModernTextOCProtocol>

@property (retain, nonatomic) NSString *requestID;
@property (retain, nonatomic) NSString *lastTemplateId;
@property (retain, nonatomic) NSMutableDictionary *requestCompletionCache;
@property (copy, nonatomic) NSString *requestText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)modernTextEditCompleteWithText:(id)a0 publishModel:(id)a1 type:(unsigned long long)a2 generateTemplateAsync:(BOOL)a3 completion:(id /* block */)a4;
- (void)challengePreLoadIfNeed:(id)a0;
- (void)prefetchWithText:(id)a0 publishModel:(id)a1;
- (double)widthForText:(id)a0 font:(id)a1;
- (void)fetchHashTagsWithKeyword:(id)a0 completion:(id /* block */)a1;
- (id)defaultColorStyleModelList;
- (id)fontChooseView;
- (id)socialToolBarWithPublishModel:(id)a0;
- (id)getAlignList;
- (id)getStyleList;
- (id)getBasicTrackParams:(id)a0;
- (id)defaultStyleModel;
- (id)getImageForName:(id)a0;
- (id)preloadTemplateId:(id)a0;
- (void)gotoEditVCWithPublish:(id)a0 imagePath:(id)a1 completion:(id /* block */)a2;
- (void)requestImageForText:(id)a0 templateId:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
- (void)cleanStyleIdIfNeeded:(id)a0 text:(id)a1;
- (void).cxx_destruct;

@end
