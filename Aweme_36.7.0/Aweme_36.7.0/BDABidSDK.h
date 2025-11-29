@class BDAThreadSafeDictionary, NSString;
@protocol BDASDKBaseProtocol;

@interface BDABidSDK : NSObject <BDASDKBaseProtocol>

@property (retain, nonatomic) BDAThreadSafeDictionary *parameters;
@property (weak, nonatomic) id<BDASDKBaseProtocol> hostInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleBidInfoWithResponse:(id)a0 error:(id)a1 httpResponse:(id)a2 siteCallback:(id /* block */)a3 unionCallBack:(id /* block */)a4;
+ (id)sharedInstance;

@end
