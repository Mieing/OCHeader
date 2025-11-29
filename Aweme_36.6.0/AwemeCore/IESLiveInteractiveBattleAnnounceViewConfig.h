@class UIColor, NSArray, NSString, UIImage;

@interface IESLiveInteractiveBattleAnnounceViewConfig : NSObject

@property (copy, nonatomic) NSArray *announceArray;
@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIImage *tipsIcon;
@property (retain, nonatomic) UIImage *closeIcon;
@property (retain, nonatomic) NSString *requestPage;

+ (id)teemFightConfig;
+ (id)roomBattleConfig;
+ (id)gusetBattleConfig;

- (void).cxx_destruct;

@end
