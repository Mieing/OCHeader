@class AWEECOMIMPageClickTask, AWEECOMIMPageTrackParamsModel;

@interface AWEECOMIMTrackClickChainTask : NSObject

@property (retain) AWEECOMIMPageTrackParamsModel *clickParamsModel;
@property (retain) AWEECOMIMPageClickTask *clickTaskModel;
@property double startTime;

+ (id)instanceWithLocationType:(id)a0 locationSubType:(id)a1 clickArea:(id)a2 otherParams:(id)a3 clickUtil:(id)a4;
+ (id)instanceWithLocationType:(id)a0 locationSubType:(id)a1 clickArea:(id)a2 otherParams:(id)a3 eventName:(id)a4 timeout:(double)a5 clickUtil:(id)a6;
+ (id)instanceWithLocationType:(id)a0 locationSubType:(id)a1 clickArea:(id)a2 otherParams:(id)a3 eventName:(id)a4 clickUtil:(id)a5;

- (void)addClickChainParams:(id)a0;
- (void)addDurationWithKey:(id)a0;
- (void)addParamsObject:(id)a0 WithKey:(id)a1;
- (void).cxx_destruct;

@end
