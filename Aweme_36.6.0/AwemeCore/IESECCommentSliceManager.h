@class NSMutableDictionary, NSString, IESECCommentSliceXEventHandler, NSObject, IESECGoodsCommentContext;
@protocol IESECSliceXInstanceInterface;

@interface IESECCommentSliceManager : NSObject <IESECCommentSliceManagerProtocol>

@property (retain, nonatomic) NSObject<IESECSliceXInstanceInterface> *sliceInstance;
@property (retain, nonatomic) IESECCommentSliceXEventHandler *sliceXEventHandler;
@property (retain, nonatomic) NSMutableDictionary *globalProps;
@property (retain, nonatomic) IESECGoodsCommentContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createViewWithSlice:(id)a0 complete:(id /* block */)a1;
- (id)bindSliceView:(id)a0 withSlice:(id)a1;
- (void)reportErr:(id)a0 action:(id)a1 slice:(id)a2;
- (void)reportStateChange:(id)a0 slice:(id)a1;
- (id)updateSliceData:(id)a0;
- (id)mergeGlobalData:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;
- (double)containerWidth;

@end
