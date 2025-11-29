@class NSString, NSMutableDictionary;

@interface BDCastSinkSourceObject : NSObject

@property (readonly, copy, nonatomic) NSString *ip;
@property (readonly, nonatomic) unsigned long long mirrorSource;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long frameCount;
@property (readonly, nonatomic) NSMutableDictionary *ptsVideoDatas;

+ (id)bytelinkSourceWithIP:(id)a0 name:(id)a1;

- (void)onVideoData:(id)a0 isVisibleFrame:(BOOL *)a1;
- (void)onCastRequest:(BOOL)a0;
- (id)initWithIP:(id)a0;
- (BOOL)isVisibleFrameH264:(id)a0;
- (void).cxx_destruct;

@end
