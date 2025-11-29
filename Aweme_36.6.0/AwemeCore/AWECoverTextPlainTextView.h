@class NSString, AWECoverTextTextView;

@interface AWECoverTextPlainTextView : UIView <UITextViewDelegate, AWECoverTextStickerProtocol>

@property (retain, nonatomic) AWECoverTextTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) id /* block */ boundsDidChangedBlock;

- (void)stickerViewBeginEditing;
- (void)stickerViewEndEditing;
- (void)updateWithEditingModel:(id)a0;
- (id)getCoverTexts;
- (unsigned long long)getCoverTextCursorLocation;
- (id)getCoverTextStoryTextInfo;
- (void)setPlaceHolderTextViewHidden:(BOOL)a0;
- (void)updateSizeAfterChange;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateBounds;
- (void)textViewDidChange:(id)a0;

@end
