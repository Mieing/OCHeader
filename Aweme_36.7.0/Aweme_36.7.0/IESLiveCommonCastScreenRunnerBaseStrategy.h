@class NSString;
@protocol IESLiveRoomService, IESLiveCommonCastScreenBusiness;

@interface IESLiveCommonCastScreenRunnerBaseStrategy : NSObject <IESLiveCommonCastScreenRunnerStrategy>

@property (retain, nonatomic) id<IESLiveCommonCastScreenBusiness> business;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentGuideInfo;
- (id)defaultGuideInfo;
- (void)startCastWithComplete:(id /* block */)a0;
- (void)stopCastWithComplete:(id /* block */)a0;
- (void)showCastGuidePanelWithConfirmBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBusiness:(id)a0;

@end
