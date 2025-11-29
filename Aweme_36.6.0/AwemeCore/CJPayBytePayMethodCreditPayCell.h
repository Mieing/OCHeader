@class NSArray, CJPayBytePayMethodCreditPayCollectionView, NSString;
@protocol CJPayBytePayCreditPayMethodModel;

@interface CJPayBytePayMethodCreditPayCell : CJPayBytePayMethodCell <CJPayMethodDataUpdateProtocol>

@property (retain, nonatomic) CJPayBytePayMethodCreditPayCollectionView *collectionView;
@property (copy, nonatomic) NSArray<CJPayBytePayCreditPayMethodModel> *creditPayMethods;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)calHeight:(id)a0;

@end
