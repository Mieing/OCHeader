@class NSString;

@interface AWEShareStudioBaseService : AWEShareCommonImpl <AWEShareStudio>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)showPanelWithAccService:(id)a0 supportDraftChannel:(BOOL)a1 supportSaveLocalChannel:(BOOL)a2 enterFrom:(id)a3 extraLogInfo:(id)a4 onViewController:(id)a5 messageDataSource:(id)a6;

@end
