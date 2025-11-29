@class NSArray, NSDictionary, HTSLiveTouchPosition, NSString, GPBInt64ObjectDictionary;

@interface IESLivePrivilegeEntranceBarInfo : NSObject <IESLivePrivilegeEntranceBarInfoProtocol>

@property (copy, nonatomic) NSArray *touchPositions;
@property (retain, nonatomic) GPBInt64ObjectDictionary *touchPositionsMap;
@property (copy, nonatomic) NSDictionary *freqStrategyMap;
@property (retain, nonatomic) HTSLiveTouchPosition *entranceDetail;
@property (copy, nonatomic) NSArray *errors;
@property (nonatomic) BOOL isTouchEnd;
@property (readonly, copy, nonatomic) NSString *touchPositionsStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createGiftDynamicOperationInfoWithData:(id)a0;

- (void)updateLocalStrategyWithTouchPositionStr:(id)a0;
- (void)setupWithData:(id)a0;
- (void)setupWithTouchPositionsMap:(id)a0;
- (void)updateTouchPositions:(id)a0 withFreqStrategyMap:(id)a1;
- (id)getUnexpiredMapFromFreqStrategyMap:(id)a0 shouldUpdateExpiredTime:(BOOL)a1;
- (void)updateGiftDynamicOperationInfoWithData:(id)a0;
- (void)setupWithGiftTouchPositions:(id)a0;
- (void).cxx_destruct;

@end
