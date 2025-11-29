@class NSString;

@interface AEKVideoClipTransitionDiffChangeImpl : NSObject <AEKVideoClipTransDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (nonatomic) BOOL overlap;
@property (nonatomic) BOOL antiTimeChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
