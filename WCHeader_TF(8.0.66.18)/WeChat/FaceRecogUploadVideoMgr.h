@class NSString, NSMutableDictionary;

@interface FaceRecogUploadVideoMgr : MMUserService <FaceRecogUploadLogicDelegate, MMServiceProtocol> {
    NSMutableDictionary *m_dicLogic;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addUploadLogic:(id)a0;
- (void)onUploadFaceVideoFinish:(id)a0;
- (void).cxx_destruct;

@end
