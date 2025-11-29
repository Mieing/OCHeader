@class OMJID, NSString;

@interface OMCContentDescSegment : OMCElementSegment <OMCEditingStateAdjustable, OMCTextToSpeechAdjustable>

@property (readonly, nonatomic) struct SharedPtr<XMSContentDescSegment> { struct XMSContentDescSegment *x0; } backingContentDescSegment;
@property (readonly, nonatomic) OMJID *belongingSegmentID;
@property (readonly, nonatomic) NSString *materialID;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *displayingText;
@property (readonly, nonatomic) NSString *textFontName;
@property (readonly, nonatomic) NSString *textFontNameInMaterial;
@property (readonly, nonatomic) NSString *colorStyleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *audioFilePath;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *roleName;
@property (readonly, nonatomic) NSString *speechText;

- (BOOL)updateText:(id)a0;
- (BOOL)updateStyleWithMaterialID:(id)a0;
- (BOOL)updateTextFontName:(id)a0;
- (BOOL)updateColorStyleWithID:(id)a0;
- (void)enterEditingState;
- (void)leaveEditingState;
- (BOOL)isEditingState;
- (void)resetRole;
- (void)updateRoleID:(id)a0 roleName:(id)a1;
- (BOOL)buildSpeechWithFilePath:(id)a0;
- (BOOL)replaceSpeechWithFilePath:(id)a0;
- (void)clearSpeech;

@end
