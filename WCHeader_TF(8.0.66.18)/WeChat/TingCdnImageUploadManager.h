@class NSMutableDictionary, NSMutableArray;

@interface TingCdnImageUploadManager : NSObject <ICdnComMgrExt>

@property (retain, nonatomic) NSMutableDictionary *uploadingMetaDict;
@property (retain, nonatomic) NSMutableArray *uploadWaitingArray;

- (id)init;
- (void)registerExt;
- (void)startUploadImagePath:(id)a0 complection:(id /* block */)a1;
- (void)checkQueue;
- (void)doCdnImageUploadWithMeta:(id)a0;
- (void)OnCdnUploadProgress:(id)a0;
- (void)OnCdnUpload:(id)a0;
- (void).cxx_destruct;

@end
