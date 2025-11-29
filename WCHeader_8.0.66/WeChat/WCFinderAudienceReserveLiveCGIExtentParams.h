@class NSString, MMFinderLiveTaskId, WCFinderAudienceReserveLiveClientInfo, NSData;

@interface WCFinderAudienceReserveLiveCGIExtentParams : NSObject

@property (copy, nonatomic) NSString *clientInfoStr;
@property (retain, nonatomic) WCFinderAudienceReserveLiveClientInfo *clientInfoModel;
@property (copy, nonatomic) NSString *qrCodeURL;
@property (retain, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (retain, nonatomic) NSData *liveCookies;
@property (copy, nonatomic) NSString *gMsgID;

- (id)getClientInfo;
- (void).cxx_destruct;

@end
