@class NSString, UIView;

@interface BDPInteractionPluginCardModel : NSObject

@property (copy, nonatomic) NSString *cardID;
@property (retain, nonatomic) UIView *cardView;
@property (nonatomic) BOOL isShowing;

- (void).cxx_destruct;

@end
