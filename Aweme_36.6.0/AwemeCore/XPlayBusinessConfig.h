@class NSString, NSArray;

@interface XPlayBusinessConfig : NSObject <XPlayBusinessConfigProtocol>

@property (nonatomic) BOOL isShowCoupon;
@property (nonatomic) BOOL isShowMoreGame;
@property (nonatomic) BOOL isGameSDK;
@property (nonatomic) BOOL isGSDK;
@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSArray *commentIDs;
@property (copy, nonatomic) NSString *agreementID;
@property (nonatomic) BOOL isNeedLoginToast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configWithDict:(id)a0;

- (void).cxx_destruct;

@end
