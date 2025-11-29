@class NSDictionary, NSString;

@interface IESLiveCreateRoomCheckControlServiceImpl : NSObject <IESLiveCreateRoomCheckControlService>

@property (nonatomic) BOOL healthScoreCheck;
@property (nonatomic) BOOL fastLive;
@property (copy, nonatomic) NSDictionary *sp;
@property (nonatomic) BOOL enableHealthScoreCheck;
@property (nonatomic) BOOL isFastLive;
@property (copy, nonatomic) NSDictionary *sourceParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLiveDisableHealthScoreCheckWithDIContext:(id)a0;
- (void).cxx_destruct;

@end
