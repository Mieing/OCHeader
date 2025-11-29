@class NSMutableDictionary, NSMutableArray;

@interface AWEECMultiMallGeneralListManager : NSObject

@property (nonatomic) long long maxLen;
@property (retain, nonatomic) NSMutableDictionary *mallListMap;
@property (retain, nonatomic) NSMutableArray *mallListList;

- (id)dequeueMallListVCForGeneralMall:(id)a0 tabIndex:(long long)a1 forRecover:(BOOL)a2;
- (void)arrangeSelectedController:(id)a0;
- (void)clearStashedGeneralMall;
- (void).cxx_destruct;
- (id)init;

@end
