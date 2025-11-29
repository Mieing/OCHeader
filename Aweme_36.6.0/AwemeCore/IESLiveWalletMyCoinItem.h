@class NSArray, NSString, NSDate, NSNumber;

@interface IESLiveWalletMyCoinItem : NSObject <IESLiveWalletIGListItem>

@property (retain, nonatomic) NSArray *chargeModels;
@property (retain, nonatomic) NSArray *otherCells;
@property (retain, nonatomic) NSNumber *diamondCount;
@property (retain, nonatomic) NSString *billUrlString;
@property (retain, nonatomic) NSString *freezeRemindString;
@property (retain, nonatomic) NSNumber *defaultDiamondID;
@property (retain, nonatomic) NSString *generalNoticeText;
@property (retain, nonatomic) NSString *generalNoticeLink;
@property (retain, nonatomic) NSDate *lastShowDate;
@property (copy, nonatomic) id /* block */ itemChangedBlock;
@property (copy, nonatomic) id /* block */ updateDataBlock;
@property (readonly, nonatomic) NSString *reasonalRemindText;
@property (readonly, nonatomic) long long maxShowTimes;
@property (nonatomic) BOOL didManualAgreement;
@property (nonatomic) BOOL iapAllowCustomizedDiamond;
@property (nonatomic) double sectionWidth;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)tapTipContainer;
- (void)tapCloseTip;
- (double)chargeColletionViewTitleHeight;
- (double)chargeCollectionHeight;
- (double)chargeDefaultFunctionHeight;
- (void)updateChargesWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })chargeItemSize;
- (void)forceUpdateData;
- (id)createSectionControllerWithTrackInfo:(id)a0;
- (void)setupTipStringWithMyCoinModel:(id)a0;
- (id)initWithMyCoinModel:(id)a0 itemChangedBlock:(id /* block */)a1 updateDataBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (double)sectionHeight;

@end
