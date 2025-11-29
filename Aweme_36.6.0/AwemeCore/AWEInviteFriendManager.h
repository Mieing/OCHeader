@class NSDictionary, NSString;

@interface AWEInviteFriendManager : NSObject <AWEInviteFriendProtocol>

@property (nonatomic) BOOL isRequestOnAir;
@property (copy, nonatomic) NSDictionary *socialShareInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)handleContactTappedWithEnterFrom:(id)a0 request:(id)a1 load:(id)a2;
- (void)handleCommandTappedWithEnterFrom:(id)a0 enterMethod:(id)a1 channelType:(unsigned long long)a2;
- (void)handleContactTappedWithEnterFrom:(id)a0 enterMethod:(id)a1 request:(id)a2 load:(id)a3;
- (void)handleScanTapped:(id)a0 enterMethod:(id)a1;
- (void)handleQRCodeTappedWithEnterFrom:(id)a0 enterMethod:(id)a1;
- (void)handleRadarTappedWithEnterFrom:(id)a0;
- (void)handleCommandTappedWithEnterFrom:(id)a0;
- (void)fetchInviteFriendsTokenWithUser:(id)a0 customItemID:(id)a1 customTargetType:(unsigned long long)a2 customWebURL:(id)a3 completion:(id /* block */)a4;
- (void)handleScanTapped:(id)a0;
- (void)handleCommandTapped;
- (void)handleQRCodeTappedWithEnterFrom:(id)a0;
- (id)cellModelForType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
