@class NSURL, NSString;

@interface AEKVideoResourceModel : NSObject <AEKVideoResource>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } resourceDuration;
@property (nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) double fps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithResourceType:(unsigned long long)a0 url:(id)a1;

- (void).cxx_destruct;

@end
