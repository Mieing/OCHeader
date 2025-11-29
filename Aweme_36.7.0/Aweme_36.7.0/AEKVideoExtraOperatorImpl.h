@class NLETrack_OC, NSString;
@protocol AEKVideoExtraData;

@interface AEKVideoExtraOperatorImpl : AEKBaseRenderEditor <AEKVideoExtraData, AEKVideoExtraOperator>

@property (retain, nonatomic) NLETrack_OC *track;
@property (readonly, nonatomic) BOOL userEditAfterBingo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AEKVideoExtraData> data;

- (id)initWithTrack:(id)a0 baseData:(id)a1 subscriberProvider:(id)a2 coreUnit:(id)a3;
- (id)setUserEditAfterBingo:(BOOL)a0;
- (void).cxx_destruct;

@end
