@class AWEIMMessageAttachmentUploadDataModel, NSString;

@interface AWEIMAttachmentTranscodeNodeInput : NSObject <IESIMSendAttachmentNodeInput>

@property (retain, nonatomic) AWEIMMessageAttachmentUploadDataModel *dataModel;
@property (nonatomic) BOOL needTranscodeAndUploadSpecialTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buildInputWithOutput:(id)a0 previousOutput:(id)a1 inputContext:(id)a2;

- (void).cxx_destruct;

@end
