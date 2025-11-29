@class NSString, MMUILabel, SightIconView;

@interface WNAttachmentFileView : WNAttachmentBaseView <GroupNoticeUploadExt, SightIconViewDelegate, MsgRecordFileDetailDelegate>

@property (retain, nonatomic) SightIconView *uploadingView;
@property (retain, nonatomic) MMUILabel *hintLabel;
@property (nonatomic) unsigned char status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttachment:(id)a0;
- (void)layoutView;
- (id)getTitle;
- (id)getDescription;
- (id)getImage;
- (void)onClickObject;
- (void)initUploadUI;
- (void)initUploadingView;
- (void)initHintLabel;
- (void)updateUploadUI:(unsigned char)a0;
- (void)updateUploadUI:(unsigned char)a0 forceUpdate:(BOOL)a1;
- (void)onPreparingUploadGroupNoticeData:(id)a0;
- (void)onUploadGroupNoticeData:(id)a0 finishedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)onUploadGroupNoticeData:(id)a0 success:(BOOL)a1;
- (void)onProgressEnd;
- (void)OpenVideoFileByMsgRecordDataWrap:(id)a0;
- (void).cxx_destruct;

@end
