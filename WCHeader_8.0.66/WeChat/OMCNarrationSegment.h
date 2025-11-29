@class NSString, NSArray;

@interface OMCNarrationSegment : OMCClipSegment

@property (readonly, nonatomic) struct SharedPtr<XMSNarrationSegment> { struct XMSNarrationSegment *x0; } backingNarrationSegment;
@property (readonly, nonatomic) NSString *narrationFilePath;
@property (readonly, nonatomic) NSString *originNarrationFilePath;
@property (readonly, nonatomic) NSString *audioFileID;
@property (readonly, nonatomic) NSArray *captionItems;
@property (readonly, nonatomic) NSArray *displayingCaptionItems;
@property (readonly, nonatomic) NSString *captionStyleID;
@property (readonly, nonatomic) NSString *captionFontName;
@property (readonly, nonatomic) NSString *captionFontNameInMaterial;
@property (readonly, nonatomic) NSString *captionColorStyleID;
@property (readonly, nonatomic) NSString *roleID;
@property (readonly, nonatomic) NSString *roleName;

- (BOOL)isCaptionsEnabled;
- (BOOL)showCaptions;
- (void)hideCaptions;
- (BOOL)updateCaptionItems:(id)a0;
- (BOOL)updateCaptionStyleWithID:(id)a0;
- (BOOL)updateCaptionFontName:(id)a0;
- (BOOL)updateCaptionColorStyleWithID:(id)a0;
- (void)resetRole;
- (void)updateRoleID:(id)a0 roleName:(id)a1;
- (BOOL)replaceNarrationSpeechWithFilePath:(id)a0;
- (BOOL)replaceNarrationSpeechWithFilePath:(id)a0 isKeepDuration:(BOOL)a1;
- (BOOL)resetToBlankAudioNarration;
- (BOOL)replaceNarrationWithFilePath:(id)a0 roleID:(id)a1 roleName:(id)a2 captionItems:(id)a3 captionStyleID:(id)a4;
- (BOOL)replaceNarrationWithFilePath:(id)a0 roleID:(id)a1 roleName:(id)a2 captionItems:(id)a3 captionStyleID:(id)a4 isKeepDuration:(BOOL)a5;

@end
