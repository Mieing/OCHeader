@class NSString;
@protocol OneCardToLynxDelegate;

@interface OneCard : UIView <BDLOneCardViewProtocol>

@property (copy, nonatomic) NSString *schema;
@property (weak, nonatomic) id<OneCardToLynxDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateHeight:(id)a0 width:(id)a1;
- (void).cxx_destruct;

@end
