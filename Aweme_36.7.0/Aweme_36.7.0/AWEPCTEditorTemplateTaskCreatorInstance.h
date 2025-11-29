@class NPGenericTemplateService_OC, ACCGenericTemplateAlbumHandler;

@interface AWEPCTEditorTemplateTaskCreatorInstance : NSObject

@property (retain, nonatomic) ACCGenericTemplateAlbumHandler *handler;
@property (retain, nonatomic) NPGenericTemplateService_OC *service;

+ (id)sharedInstance;

- (void).cxx_destruct;

@end
