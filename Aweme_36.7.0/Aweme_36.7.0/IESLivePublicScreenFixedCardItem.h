@class NSString;

@interface IESLivePublicScreenFixedCardItem : NSObject

@property (nonatomic) long long cardType;
@property (nonatomic) double preferredDuration;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) id /* block */ shouldDisplay;
@property (copy, nonatomic) id /* block */ displayStateDidChage;

- (void).cxx_destruct;

@end
