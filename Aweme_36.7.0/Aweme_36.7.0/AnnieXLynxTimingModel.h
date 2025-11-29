@class AnnieXLynxUpdateTimingModel, AnnieXLynxSetupTimingModel, NSString;

@interface AnnieXLynxTimingModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AnnieXLynxSetupTimingModel *setupTiming;
@property (retain, nonatomic) AnnieXLynxUpdateTimingModel *updateTiming;
@property (readonly, nonatomic) long long loadAppEnd;
@property (readonly, nonatomic) long long setupDrawEnd;
@property (readonly, nonatomic) long long updateDrawEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)fetchTimingWithKey:(id)a0;
- (void)collectSetupTiming:(id)a0;
- (void)collectUpdateTiming:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
