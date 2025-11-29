@interface NewVoiceDetectResult : NSObject {
    BOOL isSilient_;
    BOOL isNoisy_;
    BOOL isToLoudly_;
}

@property (nonatomic) BOOL isSilient;
@property (nonatomic) BOOL isNoisy;
@property (nonatomic) BOOL isToLoudly;

- (id)init;
- (void)dealloc;

@end
