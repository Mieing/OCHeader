@class NSString;
@protocol IESECSliceXEventForwardDelegate, IESECSliceXInstanceInterface;

@interface AWEECShoppingAIGuideSliceXInstance : NSObject <IESECSliceXEventForwardDelegate>

@property (retain, nonatomic) id<IESECSliceXInstanceInterface> sliceXInstance;
@property (weak, nonatomic) id<IESECSliceXEventForwardDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
