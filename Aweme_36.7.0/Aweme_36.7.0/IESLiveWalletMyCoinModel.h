@class NSArray, NSString, NSNumber, IESLiveChargeModelContainer;

@interface IESLiveWalletMyCoinModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveChargeModelContainer *chargeModelContainer;
@property (retain, nonatomic) NSArray *otherCells;
@property (retain, nonatomic) NSNumber *diamondCount;
@property (retain, nonatomic) NSString *billUrlString;
@property (retain, nonatomic) NSString *freezeRemindString;
@property (retain, nonatomic) NSString *reasonalRemindText;
@property (retain, nonatomic) NSString *generalNoticeText;
@property (retain, nonatomic) NSString *generalNoticeLink;
@property (nonatomic) BOOL needManuallyAgreement;
@property (nonatomic) BOOL iapAllowCustomizedDiamond;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chargeModelContainerJSONTransformer;
+ (id)otherCellsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
