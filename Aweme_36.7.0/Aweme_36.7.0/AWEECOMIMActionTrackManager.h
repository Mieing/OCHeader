@class NSString, NSMutableDictionary, NSDictionary;

@interface AWEECOMIMActionTrackManager : NSObject

@property (copy, nonatomic) NSString *lastBtmShowID;
@property (retain) NSMutableDictionary *btmTrackPageItemDict;
@property (copy, nonatomic) NSDictionary *needMatchArray;

+ (id)sharedInstance;

- (void)addBtm:(id)a0 host:(id)a1;
- (id)getCurBcmChainWithHost:(id)a0 chainLength:(unsigned long long)a1 beginBtmShowID:(id)a2;
- (void)fetchTccKey;
- (void)uploadDataWithBcmChain:(id)a0 extraParams:(id)a1;
- (id)enterPage:(id)a0;
- (void)leavePage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
