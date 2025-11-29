@class NSDictionary, NSMutableDictionary;

@interface VCStrategyMedia : NSObject

@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSDictionary *mediInfo;
@property (copy, nonatomic) NSMutableDictionary *externalUrlItemDic;
@property (copy, nonatomic) id /* block */ preloadEnd;
@property (copy, nonatomic) id /* block */ preloadEndWithInfo;
@property (copy, nonatomic) id /* block */ preloadCanceled;
@property (copy, nonatomic) id /* block */ preloadDidStart;
@property (copy, nonatomic) id /* block */ preloadProgress;
@property (copy, nonatomic) id /* block */ preloadProgressForOriginPreload;
@property (copy, nonatomic) id /* block */ preloadSelectBitrate;

- (id)initWithMediInfo:(id)a0;
- (void)appendExternalResource:(id)a0 withType:(long long)a1;
- (void).cxx_destruct;

@end
