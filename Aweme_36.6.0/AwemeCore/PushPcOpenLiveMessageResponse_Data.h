@class PushResInfo;

@interface PushPcOpenLiveMessageResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) PushResInfo *pushRes;
@property (nonatomic) BOOL hasPushRes;

+ (id)descriptor;

@end
