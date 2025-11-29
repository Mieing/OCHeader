@class NSString;

@interface IESECWinGoodsCartCtrl : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL cartDisable;
@property (copy, nonatomic) NSString *cartClickToast;
@property (copy, nonatomic) NSString *cartExtraParams;
@property (nonatomic) BOOL isShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)enableNewStyleCart;
- (void).cxx_destruct;

@end
