@class NSString;

@interface AWEACCCaptionsNetServiceImpl : NSObject <ACCCaptionsNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateServiceSet;

- (void)uploadAudioWithFilePath:(id)a0 completion:(id /* block */)a1;
- (void)queryCaptionWithTaskId:(id)a0 mandarinTranslation:(BOOL)a1 completion:(id /* block */)a2;
- (void)commitAudioWithMaterialId:(id)a0 maxLines:(id)a1 wordsPerLine:(id)a2 completion:(id /* block */)a3;
- (void)commitAudioWithMaterialId:(id)a0 musicId:(id)a1 maxLines:(id)a2 wordsPerLine:(id)a3 completion:(id /* block */)a4;
- (void)feedbackCaptionWithAwemeId:(id)a0 taskID:(id)a1 vid:(id)a2 utterances:(id)a3;

@end
