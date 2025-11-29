@class KindaLiteUseCase, NSString, MMITransmitKvData;
@protocol MMUseCaseCallback;

@interface StartTask : NSObject

@property (retain, nonatomic) KindaLiteUseCase *useCase;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) MMITransmitKvData *data;
@property (retain, nonatomic) id<MMUseCaseCallback> callback;

- (void).cxx_destruct;

@end
