@interface AWEIMActiveUserNetwork : NSObject

+ (void)fetchUserActiveStatusWithSecUidList:(id)a0 convIdList:(id)a1 source:(id)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)fetchUserActiveStatusWithConversionID:(id)a0 completion:(id /* block */)a1;
+ (id)updateUserActiveStatusWithEntrance:(id)a0 extraParams:(id)a1 context:(id)a2 completion:(id /* block */)a3;

@end
