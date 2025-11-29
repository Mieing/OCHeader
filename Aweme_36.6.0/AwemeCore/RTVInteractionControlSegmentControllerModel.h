@class NSString;

@interface RTVInteractionControlSegmentControllerModel : NSObject

@property (nonatomic) BOOL isNewStyle;
@property (nonatomic) BOOL needShareIcon;
@property (nonatomic) BOOL needInviteIcon;
@property (copy, nonatomic) NSString *tips;

- (void)updateTips:(id)a0;
- (id)initWithNewStyle:(BOOL)a0 needShareIcon:(BOOL)a1;
- (void)updateNeedInviteIcon:(BOOL)a0;
- (void).cxx_destruct;

@end
