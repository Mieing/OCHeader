@class NSString;

@interface MMFinderLiveJSAPIShareFinderShopParams_ShareInfo : NSObject

@property (copy, nonatomic) NSString *finderUsername;
@property (copy, nonatomic) NSString *entranceGMsgID;
@property (nonatomic) unsigned long long showShareType;
@property (nonatomic) BOOL showQRCodeEntrance;
@property (copy, nonatomic) NSString *qrCodeEntranceText;
@property (nonatomic) BOOL showCopyLinkEntrance;
@property (nonatomic) BOOL useShopWindowCardV2;
@property (copy, nonatomic) NSString *linkContent;
@property (nonatomic) BOOL showComplaintEntrance;
@property (copy, nonatomic) NSString *liteQuery;
@property (copy, nonatomic) NSString *liteAppId;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
