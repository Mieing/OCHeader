@class NSString, SightIconView, WNImageView, UIGestureRecognizer, MMUILabel;

@interface WNAttachmentImageView : WNAttachmentBaseView <WNImageViewDelegate, GroupNoticeUploadExt, SightIconViewDelegate>

@property (retain, nonatomic) SightIconView *loadingView;
@property (retain, nonatomic) UIGestureRecognizer *tapGesture;
@property (retain, nonatomic) MMUILabel *hintLabel;
@property (nonatomic) unsigned char status;
@property (retain, nonatomic) WNImageView *imageView;
@property (retain, nonatomic) NSString *localImagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightOfAttachment:(id)a0 withWidth:(double)a1;

- (void)forceLoadImage;
- (id)initWithAttachment:(id)a0;
- (void)layoutView;
- (void)onLoadComplete:(id)a0 SourcePath:(id)a1;
- (void)onClickObject;
- (void)onEdit:(id)a0;
- (void)retryUpload;
- (void)updateUploadUI:(unsigned char)a0;
- (void)updateUploadUI:(unsigned char)a0 forceUpdate:(BOOL)a1;
- (void)onPreparingUploadGroupNoticeData:(id)a0;
- (void)onUploadGroupNoticeData:(id)a0 finishedLength:(unsigned long long)a1 totalLength:(unsigned long long)a2;
- (void)onUploadGroupNoticeData:(id)a0 success:(BOOL)a1;
- (void)onProgressEnd;
- (void).cxx_destruct;

@end
