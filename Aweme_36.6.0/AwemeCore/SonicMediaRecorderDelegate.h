@class NSString;

@interface SonicMediaRecorderDelegate : NSObject <SonicMediaRecorderDelegate> {
    struct function<void (std::pair<sonic::media_recorder::MediaRecorderCbMsgTypeEnum, std::tuple<std::string, float, int, std::string>>)> { struct __value_func<void (std::pair<sonic::media_recorder::MediaRecorderCbMsgTypeEnum, std::tuple<std::string, float, int, std::string>>)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } listener_;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onStopWithPath:(id)a0 duration:(float)a1 fileSize:(int)a2;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)onError:(id)a0;
- (id)initWithListener:(struct function<void (std::pair<sonic::media_recorder::MediaRecorderCbMsgTypeEnum, std::tuple<std::string, float, int, std::string>>)> { struct __value_func<void (std::pair<sonic::media_recorder::MediaRecorderCbMsgTypeEnum, std::tuple<std::string, float, int, std::string>>)> { struct type { unsigned char x0[24]; } x0; void *x1; } x0; })a0;

@end
