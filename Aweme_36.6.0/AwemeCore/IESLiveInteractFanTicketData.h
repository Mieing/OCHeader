@class UIColor, NSString, NSMutableDictionary, IESLiveInteractUserFanticketStatus, IESLiveInteractFanTicketGoldenMicModel, NSNumber;

@interface IESLiveInteractFanTicketData : NSObject

@property (retain, nonatomic) NSMutableDictionary *fantickets;
@property (copy, nonatomic) NSString *score;
@property (nonatomic) int scoreLevel;
@property (retain, nonatomic) IESLiveInteractUserFanticketStatus *status;
@property (retain, nonatomic) NSNumber *style_type;
@property (retain, nonatomic) NSNumber *hidden;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *animateBgColor;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSNumber *adjustsFontSizeToFitWidth;
@property (retain, nonatomic) IESLiveInteractFanTicketGoldenMicModel *goldenMicModel;

- (void)processData;
- (BOOL)remove:(int)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)merge:(id)a0;

@end
