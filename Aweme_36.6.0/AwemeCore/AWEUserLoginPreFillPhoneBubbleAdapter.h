@class DUXPopover, NSTimer, AWEUserLoginPreFillPhoneBubbleModel, NSDictionary;

@interface AWEUserLoginPreFillPhoneBubbleAdapter : NSObject

@property (retain, nonatomic) AWEUserLoginPreFillPhoneBubbleModel *bubbleModel;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) NSDictionary *trackInfo;

- (void)autoShowBubble;
- (void)trackAutoShowBubble;
- (id)popupNameWithStyle:(unsigned long long)a0;
- (void)startBubbleWithModel:(id)a0;
- (void).cxx_destruct;
- (void)startTimer;
- (void)cancelTimer;
- (void)cancelBubble;

@end
