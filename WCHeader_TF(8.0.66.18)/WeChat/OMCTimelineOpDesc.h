@class NSString, OMJID, NSDictionary;

@interface OMCTimelineOpDesc : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } playheadTime;
@property (readonly, nonatomic) OMJID *focusedSegmentID;
@property (readonly, nonatomic) NSString *undoValue;
@property (readonly, nonatomic) NSString *redoValue;
@property (readonly, nonatomic) NSString *valueFormatter;
@property (readonly, nonatomic) NSDictionary *userInfos;

- (BOOL)isCanvasAdjustment;
- (BOOL)isDigiZoomAdjustment;
- (BOOL)isReplaceClip;
- (BOOL)isReverseClip;
- (BOOL)isTrimClip;
- (id)initWithTitle:(id)a0 playheadTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 focusedSegmentID:(id)a2;
- (id)initWithTitle:(id)a0 playheadTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 focusedSegmentID:(id)a2 undoValue:(id)a3 redoValue:(id)a4 valueFormatter:(id)a5;
- (id)initWithTitle:(id)a0 playheadTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 focusedSegmentID:(id)a2 undoValue:(id)a3 redoValue:(id)a4 valueFormatter:(id)a5 userInfos:(id)a6;
- (id)initWithS12Message:(const void *)a0;
- (void)s12SaveToMessage:(void *)a0;
- (id)description;
- (void).cxx_destruct;

@end
