@interface IESLivePaidStreamTrack : NSObject

@property (copy, nonatomic) id /* block */ trackParamHandler;
@property (copy, nonatomic) id /* block */ getCurrentPaidStream;

- (id)initWithTrackParamHandler:(id /* block */)a0;
- (void)trackBuyTicketModuleClick:(unsigned long long)a0 extraParams:(id)a1;
- (id)liveCommonParamsForEntranceType:(unsigned long long)a0 extraParams:(id)a1;
- (id)entranceParamsForEntranceType:(unsigned long long)a0;
- (id)commonParamsForEntranceType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
