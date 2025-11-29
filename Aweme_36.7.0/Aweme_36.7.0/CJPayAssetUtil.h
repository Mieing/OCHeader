@interface CJPayAssetUtil : NSObject

+ (void)trackUnexpectedScene:(id)a0 description:(id)a1 extraParams:(id)a2;
+ (id)assetVoucherTypeWithConfig:(id)a0 contextDelegate:(id)a1 extParams:(id)a2;
+ (unsigned long long)getVoucherTagTypeWithParams:(id)a0;
+ (id)getStandardVoucherTypeWithParams:(id)a0;

@end
