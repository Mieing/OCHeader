@class NSString;
@protocol IESECShopInnerFlowSliceCardDelegate;

@interface IESECShopInnerFlowSliceCardController : NSObject <IESECShopSLICardController>

@property (nonatomic) long long index;
@property (retain, nonatomic) NSString *uniqueId;
@property (weak, nonatomic) id<IESECShopInnerFlowSliceCardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sliceUniqueID;
- (void)sliceItemState:(id)a0 didChange:(id)a1;
- (void)sliceXContentView:(id)a0 didUpdateViewSize:(struct CGSize { double x0; double x1; })a1;
- (id)initWithIndex:(long long)a0 uniqueId:(id)a1;
- (void).cxx_destruct;

@end
