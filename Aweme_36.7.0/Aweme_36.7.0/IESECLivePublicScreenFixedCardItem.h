@class NSString;

@interface IESECLivePublicScreenFixedCardItem : NSObject <IESECLivePublicScreenFixedCardItem>

@property (nonatomic) double preferredDuration;
@property (copy, nonatomic) NSString *cardName;
@property (copy, nonatomic) id /* block */ shouldDisplay;
@property (copy, nonatomic) id /* block */ displayStateDidChage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transferLiveCardItem;
- (void).cxx_destruct;

@end
