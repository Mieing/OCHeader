@class NSString;

@interface OMCMovieTitleSegment : OMCElementSegment <OMCEditingStateAdjustable, OMCTextToSpeechAdjustable>

@property (readonly, nonatomic) struct SharedPtr<XMSMovieTitleSegment> { struct XMSMovieTitleSegment *x0; } backingMovieTitleSegment;
@property (readonly, nonatomic) NSString *materialID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *displayingTitle;
@property (readonly, nonatomic) NSString *titleFontName;
@property (readonly, nonatomic) NSString *titleFontNameInMaterial;
@property (readonly, nonatomic) NSString *colorStyleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *audioFilePath;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *roleName;
@property (readonly, nonatomic) NSString *speechText;

- (BOOL)updateTitle:(id)a0;
- (BOOL)updateStyleWithMaterialID:(id)a0;
- (BOOL)updateTitleFontName:(id)a0;
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
