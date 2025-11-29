@interface MJShootComposingConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long bizScene;
@property (readonly, nonatomic) BOOL shouldEnableCamera;
@property (readonly, nonatomic) BOOL shouldEnableRecording;

- (id)initWithBizScene:(unsigned long long)a0 shouldEnableCamera:(BOOL)a1 shouldEnableRecording:(BOOL)a2;
- (id)description;

@end
