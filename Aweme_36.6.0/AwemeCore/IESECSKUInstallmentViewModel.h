@class IESECSKUDetailContext, IESECSKUModel, NSString, IESECGoodsInstallmentTermInfoModel;

@interface IESECSKUInstallmentViewModel : NSObject <IESECSKUViewModelProtocol>

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECGoodsInstallmentTermInfoModel *installmentInfo;
@property (nonatomic) BOOL canSelect;
@property (copy, nonatomic) NSString *installmentTitle;
@property (copy, nonatomic) NSString *warningTitle;
@property (nonatomic) unsigned long long lastSelectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
