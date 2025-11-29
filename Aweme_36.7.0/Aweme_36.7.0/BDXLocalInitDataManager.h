@class NSMutableDictionary;

@interface BDXLocalInitDataManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *clientData;

+ (void)setClientLocalInitDataWithURL:(id)a0 dataUsedOnceOnly:(id)a1;
+ (id)clientLocalInitDataWithURL:(id)a0;
+ (id)getLocalInitDataWithURL:(id)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
