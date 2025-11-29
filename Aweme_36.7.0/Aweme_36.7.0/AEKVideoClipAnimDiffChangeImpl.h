@class NSString;

@interface AEKVideoClipAnimDiffChangeImpl : NSObject <AEKVideoClipAnimDiffChange>

@property (nonatomic) unsigned long long diffOptions;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (copy, nonatomic) NSString *paramJson;
@property (nonatomic) BOOL newVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
