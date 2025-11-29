@class NSString;

@interface IESGCPUserGiftStatusModel : NSObject

@property (copy, nonatomic) NSString *playId;
@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *hint;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int focusIndex;
@property (nonatomic) int loginDays;

- (void).cxx_destruct;

@end
