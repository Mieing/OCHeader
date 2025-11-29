@class NSString;

@interface WCCanvasComponentBottomSwipeInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *swipeText;
@property (nonatomic) int swipeActionType;
@property (retain, nonatomic) NSString *jumpUrl;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
