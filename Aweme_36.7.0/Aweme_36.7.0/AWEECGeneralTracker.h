@class NSString;

@interface AWEECGeneralTracker : NSObject <AWEECTrackerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isObjectEmpty:(id)a0;
- (void)appendEntranceInfoWithModel:(id)a0 btmTrackerModel:(id)a1 scene:(id)a2;
- (id)bcmBiz;
- (id)findParamsFromBcmNode:(id)a0 targetBtmArray:(id)a1 bcmKeyArray:(id)a2;
- (id)findParamsFromBcmNode:(id)a0 bcmKeyArray:(id)a1;

@end
