@class NSString, NSArray;

@interface MMFinderLivePrepayTiersPanelViewModel : NSObject

@property (retain, nonatomic) NSString *eventTitle;
@property (retain, nonatomic) NSString *eventDescription;
@property (retain, nonatomic) NSArray *tiers;
@property (nonatomic) BOOL isUpgrade;
@property (retain, nonatomic) NSString *referenceId;
@property (nonatomic) unsigned int livingTime;
@property (retain, nonatomic) NSString *productTitle;
@property (readonly, nonatomic) BOOL hasAvailableTiers;

+ (id)viewModelWithPaymentItemsResponse:(id)a0 eventTitle:(id)a1 eventDescription:(id)a2 referenceId:(id)a3;

- (void).cxx_destruct;

@end
