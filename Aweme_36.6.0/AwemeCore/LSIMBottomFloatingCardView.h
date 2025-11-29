@class NSDictionary, NSString;
@protocol LSIMBottomFloatingCardViewDelegate;

@interface LSIMBottomFloatingCardView : UIView

@property (copy, nonatomic) NSDictionary *cardNetDict;
@property (readonly, nonatomic) long long cardType;
@property (readonly, copy, nonatomic) NSString *cardTypeString;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (weak, nonatomic) id<LSIMBottomFloatingCardViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *cardDict;

- (id)formatPrice:(double)a0;
- (id)initWithType:(long long)a0 cardDict:(id)a1 cardNetDict:(id)a2;
- (void)updateCardNetDict:(id)a0;
- (void).cxx_destruct;

@end
