@class NSMutableDictionary;

@interface AWEPOIGoodsDetailPingbackFilter : NSObject

@property (retain, nonatomic) NSMutableDictionary *noticeNameDict;

- (BOOL)containsNoticeName:(id)a0 index:(long long)a1;
- (void)addNoticeName:(id)a0 index:(long long)a1;
- (void).cxx_destruct;

@end
