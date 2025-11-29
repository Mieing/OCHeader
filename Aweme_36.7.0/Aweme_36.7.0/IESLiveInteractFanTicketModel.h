@class UIColor, NSString, IESLiveInteractUserFanticketStatus, IESLiveInteractFanTicketGoldenMicModel, NSNumber;

@interface IESLiveInteractFanTicketModel : NSObject

@property (nonatomic) int level;
@property (copy, nonatomic) NSString *score;
@property (retain, nonatomic) IESLiveInteractUserFanticketStatus *status;
@property (retain, nonatomic) NSNumber *style_type;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *animateBgColor;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSNumber *adjustsFontSizeToFitWidth;
@property (retain, nonatomic) IESLiveInteractFanTicketGoldenMicModel *goldenMicModel;

+ (id)modelWithLevel:(int)a0 score:(id)a1 quickInteract:(id)a2 flashAnimation:(id)a3;

- (void).cxx_destruct;
- (void)merge:(id)a0;

@end
