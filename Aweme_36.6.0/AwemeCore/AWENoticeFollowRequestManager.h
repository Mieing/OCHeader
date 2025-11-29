@interface AWENoticeFollowRequestManager : NSObject

+ (void)followRequestDidRefuse:(id)a0 user:(id)a1 extraTrackParams:(id)a2 completion:(id /* block */)a3;
+ (void)followRequestDidApprove:(id)a0 extraTrackParams:(id)a1 completion:(id /* block */)a2;
+ (void)followRequestDidFollowBack:(id)a0 extraTrackParams:(id)a1 completion:(id /* block */)a2;
+ (void)trackWithParams:(id)a0 event:(id)a1;
+ (id)relationContext:(id)a0 extraTrackParams:(id)a1;

@end
