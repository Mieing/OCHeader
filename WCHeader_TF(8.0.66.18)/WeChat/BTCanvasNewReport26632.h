@class NSString, NSMutableSet;

@interface BTCanvasNewReport26632 : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableSet *cardIdSet;
@property (retain, nonatomic) NSMutableSet *cardIdSetV2;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onClearAllData;
- (void)setCardId:(id)a0;
- (BOOL)containsCardId:(id)a0;
- (void)setCardIdV2:(id)a0;
- (BOOL)containsCardIdV2:(id)a0;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
