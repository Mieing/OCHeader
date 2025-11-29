@class NSString;
@protocol IESECMediaPreviewDelegate;

@interface IESECMediaPreviewSliceManager : NSObject <IESECPreviewSliceManagerServeice>

@property (weak, nonatomic) id<IESECMediaPreviewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getElementViewInSliceXView:(id)a0 withKey:(id)a1 error:(id *)a2;
- (void)triggerActions:(id)a0;
- (id)getSliceViewWithSlice:(id)a0 fitWidth:(double)a1;
- (void)bindSliceViewWithSlice:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
