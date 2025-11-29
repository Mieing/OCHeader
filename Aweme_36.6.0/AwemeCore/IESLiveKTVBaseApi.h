@class NSNumber, NSString;
@protocol IESLiveKTVFullLinkMonitor;

@interface IESLiveKTVBaseApi : HTSLiveApi

@property (retain, nonatomic) NSNumber *roomId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) long long pageNumber;
@property (retain, nonatomic) id<IESLiveKTVFullLinkMonitor> ktvFullMonitor;

- (id)initWithRoomId:(id)a0 userId:(id)a1;
- (void)handlerResponse:(id)a0 error:(id)a1 noToast:(BOOL)a2 startTime:(double)a3 event:(id)a4 completion:(id /* block */)a5;
- (void).cxx_destruct;

@end
