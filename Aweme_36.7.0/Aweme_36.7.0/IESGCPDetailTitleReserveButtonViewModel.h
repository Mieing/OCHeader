@class IESGCPPBGameDetailReserveBtnInfo, IESGCPDetailTitleReserveButtonThemeConfig;

@interface IESGCPDetailTitleReserveButtonViewModel : IESGCPDetailBaseViewModel

@property (retain, nonatomic) IESGCPPBGameDetailReserveBtnInfo *info;
@property (nonatomic) BOOL gameOnlined;
@property (readonly, nonatomic) IESGCPDetailTitleReserveButtonThemeConfig *themeConfig;

- (long long)giftNum;
- (BOOL)supportReserve;
- (void)updateReservedStatus:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)reserved;
- (void)setContent:(id)a0;

@end
