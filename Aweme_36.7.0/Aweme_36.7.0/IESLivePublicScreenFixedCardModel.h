@class NSString, NSDictionary, IESLivePublicScreenFixedCardItem;

@interface IESLivePublicScreenFixedCardModel : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long cardType;
@property (nonatomic) double duration;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long displayState;
@property (retain, nonatomic) IESLivePublicScreenFixedCardItem *relatedItem;

- (void).cxx_destruct;

@end
