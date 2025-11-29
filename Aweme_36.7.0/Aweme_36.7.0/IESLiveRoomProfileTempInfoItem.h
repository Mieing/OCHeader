@class NSAttributedString;

@interface IESLiveRoomProfileTempInfoItem : NSObject

@property (retain, nonatomic) NSAttributedString *mainText;
@property (retain, nonatomic) NSAttributedString *subText;
@property (copy, nonatomic) id /* block */ onClicked;
@property (copy, nonatomic) id /* block */ onShow;
@property (copy, nonatomic) id /* block */ onDisappear;
@property (nonatomic) long long triggerDuration;

- (void).cxx_destruct;
- (id)init;
- (double)itemWidth;

@end
