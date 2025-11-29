@class NSString;

@interface IESLiveRevenueInteractBattleChooseButton : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSString *eventName;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) long long entranceType;

- (void).cxx_destruct;

@end
