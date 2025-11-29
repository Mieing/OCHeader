@class TTHttpTask;
@protocol IESLiveRoomService;

@interface IESLiveStreamPictureRecognitionApi : NSObject

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) TTHttpTask *uploadTask;

- (id)uploadStreamPictureWithImage:(id)a0 scene:(int)a1 requestId:(unsigned long long)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (id)initWithRoom:(id)a0;

@end
