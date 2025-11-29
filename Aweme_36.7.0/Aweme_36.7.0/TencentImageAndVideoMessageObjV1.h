@class TencentImageMessageObjV1, TencentVideoMessageV1;

@interface TencentImageAndVideoMessageObjV1 : TencentBaseMessageObj

@property (retain, nonatomic) TencentImageMessageObjV1 *objImageMessage;
@property (retain, nonatomic) TencentVideoMessageV1 *objVideoMessage;

- (BOOL)isVaild;
- (void)setDataImage:(id)a0;
- (id)initWithMessage:(id)a0 videoUrl:(id)a1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)setVideoUrl:(id)a0;

@end
