@class NSDictionary, NSMutableDictionary;

@interface AWEPOIDetailZeroVVReporter : NSObject

@property (copy, nonatomic) NSDictionary *lvMap;
@property (retain, nonatomic) NSMutableDictionary *lv1LynxCards;
@property (retain, nonatomic) NSMutableDictionary *lv2LynxCards;
@property (retain, nonatomic) NSMutableDictionary *lv3LynxCards;
@property (nonatomic) BOOL isFMPFinished;

- (void)markFMPFinished;
- (void)updateLynxView:(id)a0 loadingStatus:(unsigned long long)a1;
- (id)getStatusStringForLv:(id)a0;
- (id)errorAndLoadingCardsForLv:(id)a0;
- (unsigned long long)getStatusForLv:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)dealloc;
- (void)setupMap;

@end
