@class NSArray, NSMutableArray;

@interface AWELiveRoomBusinessParams : NSObject

@property (retain, nonatomic) NSMutableArray *businessParamsArray;
@property (readonly, nonatomic) NSArray *businessParams;

- (void)addClickParams:(id)a0 businessType:(long long)a1;
- (void)addFirstShowParams:(id)a0 businessType:(long long)a1;
- (void)addContextParams:(id)a0 businessType:(long long)a1;
- (id)getParamWithBusinessType:(long long)a0;
- (void)addJsonString:(id)a0 businessType:(long long)a1;
- (void).cxx_destruct;

@end
