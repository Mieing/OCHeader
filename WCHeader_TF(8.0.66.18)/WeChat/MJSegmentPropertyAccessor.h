@class NSString, MJSegmentViewModel;

@interface MJSegmentPropertyAccessor : NSObject

@property (weak, nonatomic) MJSegmentViewModel *segmentVM;
@property (retain, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *displayingText;
@property (readonly, nonatomic) NSString *displayingSubText;
@property (readonly, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *fontName;
@property (retain, nonatomic) NSString *materialID;
@property (retain, nonatomic) NSString *colorStyleID;
@property (readonly, nonatomic) NSString *animPresetID;
@property (readonly, nonatomic) BOOL isBuiltinAnimEnabled;

- (id)initWithSegmentViewModel:(id)a0;
- (void)setText:(id)a0 atTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setSubText:(id)a0 atTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)displayingTextAtTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)displayingSubTextAtTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)updateAnimPresetWithID:(id)a0;
- (id)displayingCaptionTextInLanguage:(id)a0;
- (id)displayingCaptionTextAtTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 language:(id)a1;
- (void)setCaptionText:(id)a0 atTimeInTimeline:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 language:(id)a2;
- (void).cxx_destruct;

@end
