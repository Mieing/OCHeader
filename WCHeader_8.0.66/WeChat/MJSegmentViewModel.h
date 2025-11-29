@class MJSegmentPropertyAccessor, NSString, OMCSegment, UBEmptySignal, OMJID;

@interface MJSegmentViewModel : NSObject

@property (retain, nonatomic) NSString *segmentTitle;
@property (retain, nonatomic) MJSegmentPropertyAccessor *accessor;
@property (readonly, nonatomic) OMCSegment *segment;
@property (readonly, nonatomic) OMJID *segmentID;
@property (readonly, nonatomic) unsigned long long segmentType;
@property (readonly, nonatomic) BOOL hasMultiSubtitles;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL hasAudioClip;
@property (readonly, nonatomic) UBEmptySignal *segmentDidMutateSignal;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationStartTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationEndTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } presentationTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } playbackTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } absoluteTimeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) unsigned long long segmentUIState;
@property (readonly, nonatomic) BOOL isRemovable;
@property (readonly, nonatomic) BOOL isDuplicable;
@property (readonly, nonatomic) BOOL isMovable;
@property (readonly, nonatomic) BOOL isTrimmable;
@property (readonly, nonatomic) BOOL isReversible;
@property (readonly, nonatomic) BOOL isContentRangeAdjustableCurrently;
@property (readonly, nonatomic) BOOL isSpeechRecognitionAvailable;
@property (readonly, nonatomic) BOOL canEditMovieTitle;
@property (readonly, nonatomic) BOOL canEditContentDesc;
@property (readonly, nonatomic) BOOL canEditFancyText;
@property (readonly, nonatomic) BOOL canEditCaptionText;
@property (readonly, nonatomic) BOOL canEditTime;
@property (readonly, nonatomic) BOOL canEditLocation;
@property (readonly, nonatomic) BOOL canEditMovieTitleStyle;
@property (readonly, nonatomic) BOOL canEditContentDescStyle;
@property (readonly, nonatomic) BOOL canEditLyricsStyle;
@property (readonly, nonatomic) BOOL canReplaceEmoticon;
@property (readonly, nonatomic) BOOL canReplaceFancyText;
@property (readonly, nonatomic) BOOL canReplaceWhenAndWhere;
@property (readonly, nonatomic) BOOL canTrim;
@property (readonly, nonatomic) BOOL canDelete;
@property (readonly, nonatomic) BOOL canSyncPosition;
@property (readonly, nonatomic) BOOL canEditContentByHandleBox;
@property (readonly, nonatomic) BOOL canEditStyleByHandleBox;
@property (readonly, nonatomic) BOOL canTrimByHandleBox;
@property (readonly, nonatomic) BOOL canTTS;

- (id)initWithSegment:(id)a0;
- (BOOL)syncWithSegment:(id)a0;
- (void)syncWithSegmentImpl;
- (void)dealloc;
- (BOOL)isCuttableAtPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)isTextEditableAtPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)prefetch;
- (void)cancelPrefetching;
- (void)syncWithMutationEntry:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
