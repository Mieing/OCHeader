@class NSTimer, NSString;
@protocol IESLiveClientAIService;

@interface IESLiveImageClassifyManager : NSObject <IESLiveImageClassifyService>

@property (retain, nonatomic) id<IESLiveClientAIService> clientAIService;
@property (nonatomic) BOOL isModelRuning;
@property (retain, nonatomic) NSTimer *reportTimer;
@property (copy, nonatomic) NSString *top1;
@property (copy, nonatomic) NSString *top2;
@property (copy, nonatomic) NSString *top3;
@property (copy, nonatomic) NSString *top4;
@property (copy, nonatomic) NSString *top5;
@property (copy, nonatomic) NSString *top6;
@property (copy, nonatomic) NSString *top7;
@property (copy, nonatomic) NSString *top8;
@property (copy, nonatomic) NSString *top9;
@property (copy, nonatomic) NSString *top10;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (id)userService;
- (void)startCaptureVideoImage;
- (void)stopCaptureVideoImage;
- (id)currentAudienceVCRoomModel;
- (void)runClassifyModelWithPixelBuffer:(struct __CVBuffer { } *)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
