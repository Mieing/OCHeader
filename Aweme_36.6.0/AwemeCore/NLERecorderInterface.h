@class NLEEditor_OC, NSString, HTSVideoData, VERecorderWrapper, VERecorderSession;

@interface NLERecorderInterface : NSObject

@property (retain, nonatomic) VERecorderWrapper *recorderWrapper;
@property (readonly, nonatomic) VERecorderSession *recorder;
@property (readonly, nonatomic) HTSVideoData *videoData;
@property (retain, nonatomic) NLEEditor_OC *editor;
@property (copy, nonatomic) NSString *draftFolder;

- (void)setVERecorder:(id)a0 videoData:(id)a1;
- (void)resetPrevModel;
- (id)createNLEEditor;
- (void).cxx_destruct;

@end
