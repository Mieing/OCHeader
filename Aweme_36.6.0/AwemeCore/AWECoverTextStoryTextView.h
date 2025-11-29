@class NSString;

@interface AWECoverTextStoryTextView : ACCTextStickerView <AWECoverTextStickerProtocol>

@property (nonatomic) double fontScale;
@property (copy, nonatomic) id /* block */ boundsDidChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateDisplay;
- (id)initWithTextInfo:(id)a0 options:(unsigned long long)a1;
- (void)stickerViewBeginEditing;
- (void)stickerViewEndEditing;
- (void)updateWithEditingModel:(id)a0;
- (id)getCoverTexts;
- (unsigned long long)getCoverTextCursorLocation;
- (id)getCoverTextStoryTextInfo;
- (void)setPlaceHolderTextViewHidden:(BOOL)a0;
- (void)updateSizeAfterChange;
- (void).cxx_destruct;

@end
