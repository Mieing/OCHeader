@interface IESECAddressServiceBtmHelper : NSObject

+ (BOOL)isSameBtm:(id)a0 anotherBtm:(id)a1;
+ (id)getCurrentSceneWithBTMList:(id)a0 config:(id)a1;
+ (id)getLastSceneWithBTMList:(id)a0 config:(id)a1 chainLength:(long long)a2 needSkipLastNode:(BOOL)a3;
+ (id)convertBCMChainToBTMList:(id)a0;
+ (BOOL)findInNextBtmList:(id)a0 matchBtm:(id)a1;
+ (id)findBtmBeforeAddressSelectPage;
+ (id)getCurrentBTM;
+ (id)getAddressResultWithCurrentBTM:(id)a0 btmSourceToken:(id)a1 config:(id)a2;
+ (id)getAddressResultWithHost:(id)a0 config:(id)a1;

@end
