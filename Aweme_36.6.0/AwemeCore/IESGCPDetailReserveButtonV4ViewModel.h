@class IESGCPPBGameDetailReserveButtonV2;

@interface IESGCPDetailReserveButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (retain, nonatomic) IESGCPPBGameDetailReserveButtonV2 *buttonData;
@property (nonatomic) unsigned long long reserveState;
@property (readonly, nonatomic) BOOL isReserved;
@property (readonly, nonatomic) BOOL isGameOnlined;
@property (nonatomic) BOOL isChangingState;

- (void)parseButtonStyle;
- (void)reserveGameWithShowLoadingInView:(id)a0 completeBlock:(id /* block */)a1;
- (void)cancelReserveGameWithLynxView;
- (BOOL)needAutoReserve;
- (void).cxx_destruct;
- (void)setContent:(id)a0;
- (id)init;
- (id)buttonStyle;

@end
