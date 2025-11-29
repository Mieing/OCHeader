@class NSNumber, AWEECShoppingAIGuideMessageGroupViewModel, AWEECShoppingAIGuideContext;
@protocol AWEECShoppingAIGuideBaseCardDelegate;

@interface AWEECShoppingAIGuideBaseCard : UIView

@property (retain, nonatomic) NSNumber *marginTop;
@property (weak, nonatomic) AWEECShoppingAIGuideMessageGroupViewModel *weakGroupMessageViewModel;
@property (retain, nonatomic) AWEECShoppingAIGuideContext *context;
@property (weak, nonatomic) id<AWEECShoppingAIGuideBaseCardDelegate> delegate;

- (id)initWithModel:(id)a0 context:(id)a1;
- (void)setupUIWithModel:(id)a0;
- (void).cxx_destruct;

@end
