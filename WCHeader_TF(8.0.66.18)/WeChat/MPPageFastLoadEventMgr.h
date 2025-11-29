@class NSSet, NSMutableDictionary;

@interface MPPageFastLoadEventMgr : NSObject

@property (retain, nonatomic) NSSet *setEventWithTmplType;
@property (retain, nonatomic) NSMutableDictionary *dictTmplDownloadState;

- (id)init;
- (void)notifyPageFastLoadTemplateDownloadEvent:(unsigned int)a0 templateType:(unsigned int)a1 downloadState:(unsigned int)a2 checkTmplInfo:(id)a3 templateInfo:(id)a4;
- (void)notifyPageFastLoadTemplateDownloadEvent:(unsigned int)a0 templateType:(unsigned int)a1 downloadState:(unsigned int)a2 checkTmplInfo:(id)a3 templateInfo:(id)a4 detailDesc:(id)a5;
- (unsigned int)downloadStateWithTemplateType:(unsigned int)a0;
- (void).cxx_destruct;

@end
