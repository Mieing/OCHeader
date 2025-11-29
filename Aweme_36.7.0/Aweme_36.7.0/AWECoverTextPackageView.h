@class NSString, AWECoverTextPackageInnerView, AWECoverTextPackage;

@interface AWECoverTextPackageView : UIView <AWECoverTextStickerProtocol>

@property (retain, nonatomic) AWECoverTextPackageInnerView *innerView;
@property (nonatomic) unsigned long long inputLocation;
@property (retain, nonatomic) AWECoverTextPackage *textPackageConfig;
@property (nonatomic) double fontScale;
@property (copy, nonatomic) id /* block */ boundsDidChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_becomeFirstResponderWithCursorLocation:(unsigned long long)a0;
- (void)p_updateTexts:(id)a0;
- (void)stickerViewBeginEditing;
- (void)stickerViewEndEditing;
- (void)updateWithEditingModel:(id)a0;
- (id)getCoverTexts;
- (unsigned long long)getCoverTextCursorLocation;
- (id)getCoverTextStoryTextInfo;
- (void)setPlaceHolderTextViewHidden:(BOOL)a0;
- (void)updateSizeAfterChange;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateBounds;

@end
