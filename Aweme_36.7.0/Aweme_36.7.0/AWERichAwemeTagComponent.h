@class NSArray, NSString, AWEPlayInteractionBaseElement, AWEVideoTypeTagView;

@interface AWERichAwemeTagComponent : NSObject <AFDVideoTagsProtocol>

@property (retain, nonatomic) AWEVideoTypeTagView *richAwemeTagView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (weak, nonatomic) NSArray *currentActivatedComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)richAwemeTagNeedShowWithModel:(id)a0;
+ (id)newAlbumTag:(id)a0;
+ (BOOL)albumIsAutoPlay:(id)a0;
+ (BOOL)albumIsMusicBeatOn:(id)a0;
+ (BOOL)needShowWithContext:(id)a0;

- (long long)tagWidth;
- (BOOL)enableTextEnterDetail;
- (Class)largeFontAdaptUtilClass;
- (BOOL)enableAdaptLargeFontMode;
- (void)onRichAwemeTagClicked:(id)a0;
- (BOOL)currentTagNeedPlaceHolder;
- (BOOL)needHiddenWhenShowPlaceHolder;
- (void)showImageAlbumNoteIconIfNeededWithModel:(id)a0 tagModel:(id)a1;
- (void).cxx_destruct;
- (void)updateWithModel:(id)a0;
- (id)tagView;

@end
