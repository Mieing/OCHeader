@class NSArray, NSString;
@protocol IESLiveRoomService, IESLiveEffectsDownloadConfigMonitor;

@interface IESLiveEffectsDownloadConfig : NSObject

@property (copy, nonatomic) NSArray *effectIds;
@property (nonatomic) long long fetchMomentType;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) BOOL isFromPitaya;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) id /* block */ downloadCompletion;
@property (copy) NSString *traceId;
@property (weak, nonatomic) id<IESLiveEffectsDownloadConfigMonitor> monitor;

- (id)initWithEffectIds:(id)a0 fetchMomentType:(long long)a1 bizType:(id)a2 roomModel:(id)a3 downloadCompletion:(id /* block */)a4;
- (void).cxx_destruct;

@end
