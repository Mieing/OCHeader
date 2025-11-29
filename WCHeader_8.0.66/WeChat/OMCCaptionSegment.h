@class NSString;

@interface OMCCaptionSegment : OMCElementSegment <OMCEditingStateAdjustable>

@property (readonly, nonatomic) struct SharedPtr<XMSCaptionSegment> { struct XMSCaptionSegment *x0; } backingCaptionSegment;
@property (readonly, nonatomic) NSString *materialID;
@property (readonly, nonatomic) NSString *colorStyleID;
@property (readonly, nonatomic) NSString *mainCaptionFontName;
@property (readonly, nonatomic) NSString *mainCaptionFontNameInMaterial;
@property (readonly, nonatomic) NSString *secondaryCaptionFontName;
@property (readonly, nonatomic) NSString *secondaryCaptionFontNameInMaterial;
@property (retain, nonatomic) NSString *mainCaptionLanguage;
@property (retain, nonatomic) NSString *secondaryCaptionLanguage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)updateStyleWithMaterialID:(id)a0;
- (BOOL)updateColorStyleWithID:(id)a0;
- (BOOL)updateMainCaptionFontName:(id)a0;
- (BOOL)updateSecondaryCaptionFontName:(id)a0;
- (BOOL)updateAllCaptionsFontName:(id)a0;
- (void)enterEditingState;
- (void)leaveEditingState;
- (BOOL)isEditingState;
- (id)getCaptionItemsWithLanguage:(id)a0;
- (BOOL)updateCaptionItems:(id)a0 withLanguage:(id)a1;

@end
