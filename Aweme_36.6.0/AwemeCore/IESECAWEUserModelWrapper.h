@class NSString, AWEUserModel;

@interface IESECAWEUserModelWrapper : NSObject <IESECUserModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *secUserId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
