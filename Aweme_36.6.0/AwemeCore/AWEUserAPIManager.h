@interface AWEUserAPIManager : NSObject

+ (id)checkInWhenLaunch;
+ (id)logoutFrom:(id)a0;
+ (id)loginWithTicket:(id)a0;
+ (id)checkIn:(BOOL)a0 headers:(id)a1;
+ (BOOL)fetchPassportEnabled;
+ (id)fetchUser:(BOOL)a0 isColdLaunch:(BOOL)a1;
+ (id)checkIn;
+ (id)checkOut;

@end
