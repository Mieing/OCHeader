@class NSString, WCSKAdNetworkItem;

@interface WCFinderJumpNativeAppStoreParams : NSObject

@property (retain, nonatomic) NSString *installSchemeUrl;
@property (nonatomic) int installAction;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) WCSKAdNetworkItem *skAdItem;

- (void).cxx_destruct;

@end
