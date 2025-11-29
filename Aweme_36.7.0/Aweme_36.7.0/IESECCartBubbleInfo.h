@class NSString, IESECBubbleView;

@interface IESECCartBubbleInfo : NSObject

@property (nonatomic) BOOL isHiding;
@property (nonatomic) unsigned long long bubbleIdx;
@property (copy, nonatomic) NSString *bubbleTip;
@property (retain, nonatomic) IESECBubbleView *bubbleView;

- (BOOL)isEqualToBubbleInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
