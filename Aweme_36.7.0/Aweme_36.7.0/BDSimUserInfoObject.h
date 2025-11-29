@class NSString;

@interface BDSimUserInfoObject : NSObject <BDSimUserModel>

@property (retain, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *nickname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
