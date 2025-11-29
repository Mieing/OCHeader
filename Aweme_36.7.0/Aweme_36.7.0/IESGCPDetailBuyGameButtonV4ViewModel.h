@class NSString, IESGCPPBGameDetailBuyButton, IESGCPDetailBuyButtonStyle;

@interface IESGCPDetailBuyGameButtonV4ViewModel : IESGCPDetailUniversalButtonViewModel

@property (retain, nonatomic) IESGCPPBGameDetailBuyButton *buyButtonData;
@property (retain, nonatomic) NSString *propID;
@property (retain, nonatomic) NSString *propName;
@property (nonatomic) int propCompanyType;
@property (nonatomic) int propType;
@property (readonly, nonatomic) IESGCPDetailBuyButtonStyle *buyButtonStyle;

- (void)parseButtonStyle;
- (id)parseButtonStyleWithContent:(id)a0;
- (BOOL)needAutoOpen;
- (void)handleButtonDidClickWithRoute:(id)a0;
- (void)openPropBuyPageWithRoute:(id)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
