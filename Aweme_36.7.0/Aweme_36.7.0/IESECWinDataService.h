@class NSString, IESECWinAuthorInfoResponse, NSArray, NSDictionary, IESECWinHeaderResponse, IESECListKitSectionModel, IESECWinProductRefreshResponse;

@interface IESECWinDataService : NSObject <IESECWinDataService>

@property (retain, nonatomic) IESECListKitSectionModel *lastHeaderSection;
@property (retain, nonatomic) IESECWinHeaderResponse *headerResponse;
@property (retain, nonatomic) id fixedInsertCardData;
@property (retain, nonatomic) IESECWinAuthorInfoResponse *authorResponse;
@property (retain, nonatomic) NSArray *tabs;
@property (nonatomic) long long appointmentStatus;
@property (retain, nonatomic) NSArray *globalMixFullCards;
@property (retain, nonatomic) IESECListKitSectionModel *globalMixFullCardsSection;
@property (retain, nonatomic) IESECWinProductRefreshResponse *productRefreshResponse;
@property (retain, nonatomic) NSDictionary *feedItemConfigs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configTabCardsListWithSections:(id)a0;
- (void)configHeaderSectionsWithShowTabStatus:(BOOL)a0;
- (void).cxx_destruct;

@end
