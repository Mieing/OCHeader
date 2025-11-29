@class OMJID, NSString, NSDictionary, OMCTimeline;

@interface OMCSegment : NSObject <OMCSegmentMeta>

@property (readonly, nonatomic) struct SharedPtr<XMSSegment> { struct XMSSegment *x0; } backingSegment;
@property (readonly, weak, nonatomic) OMCTimeline *timeline;
@property (readonly, nonatomic) OMJID *segmentID;
@property (readonly, nonatomic) unsigned long long segmentType;
@property (retain, nonatomic) NSString *segmentTitle;
@property (readonly, nonatomic) BOOL isTimelineInteractionDisabled;
@property (readonly, nonatomic) BOOL isAnchored;
@property (readonly, nonatomic) BOOL isElementSegment;
@property (readonly, nonatomic) BOOL isTransitionSegment;
@property (readonly, nonatomic) BOOL isClipSegment;
@property (readonly, nonatomic) unsigned long long belongingGroupType;
@property (readonly, nonatomic) BOOL isBelongingAudialGroup;
@property (readonly, nonatomic) BOOL isBelongingVisualGroup;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationStartTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } presentationDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } presentationTimeRange;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } absoluteTimeRange;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (nonatomic) int layerID;
@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSegmentID:(id)a0 timeline:(id)a1;
- (void)removeUserInfoValueForKey:(id)a0;
- (void)setUserInfoValue:(id)a0 forKey:(id)a1;
- (id)userInfoValueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
