@class NSString;

@interface AWEGuestNetworkUtil : NSObject <AWEGuestNetworkUtilProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diggAwemeItem:(id)a0 isUndigg:(BOOL)a1 referString:(id)a2 extraParam:(id)a3 completion:(id /* block */)a4;
+ (id)follow:(id)a0 referString:(id)a1 extraParam:(id)a2 completion:(id /* block */)a3;
+ (id)follow:(id)a0 referString:(id)a1 isUnfollow:(BOOL)a2 extraParam:(id)a3 completion:(id /* block */)a4;
+ (id)diggAwemeItem:(id)a0 referString:(id)a1 extraParam:(id)a2 completion:(id /* block */)a3;
+ (id)undiggAwemeItem:(id)a0 referString:(id)a1 extraParam:(id)a2 completion:(id /* block */)a3;
+ (id)unfollow:(id)a0 referString:(id)a1 extraParam:(id)a2 completion:(id /* block */)a3;


@end
