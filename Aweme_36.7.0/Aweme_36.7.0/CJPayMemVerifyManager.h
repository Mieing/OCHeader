@class NSDictionary, NSMutableDictionary, NSString;

@interface CJPayMemVerifyManager : NSObject <CJPayTrackerProtocol>

@property (copy, nonatomic) NSDictionary *verifyItemConfig;
@property (retain, nonatomic) NSMutableDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)event:(id)a0 params:(id)a1;
- (id)p_getMemVerifyItemWithType:(unsigned long long)a0;
- (id)p_getSpecificVerifyType:(unsigned long long)a0;
- (void)beginMemVerifyWithType:(unsigned long long)a0 params:(id)a1 fromVC:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
