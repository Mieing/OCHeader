@class IESECLiveSKUView, NSString, IESECLiveSKUCreateInfo, IESECLiveAddCartInfo;

@interface IESECLiveSKUHandlerItem : NSObject

@property (weak, nonatomic) IESECLiveSKUView *skuView;
@property (retain, nonatomic) IESECLiveAddCartInfo *addCartInfo;
@property (copy, nonatomic) NSString *skuSessionID;
@property (retain, nonatomic) IESECLiveSKUCreateInfo *skuCreateInfo;

- (id)initWithSKUView:(id)a0 addCartInfo:(id)a1;
- (id)initWithSKUSessionID:(id)a0 addCartInfo:(id)a1 skuCreateInfo:(id)a2;
- (void).cxx_destruct;

@end
