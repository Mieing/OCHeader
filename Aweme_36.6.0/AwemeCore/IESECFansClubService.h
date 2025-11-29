@class NSString, IESECRelationFansClubInfoResponse;

@interface IESECFansClubService : NSObject <IESECFansClubService>

@property (retain, nonatomic) IESECRelationFansClubInfoResponse *fansClubInfoResponse;
@property (copy, nonatomic) NSString *userId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestFansClubInfoFromRemote:(id /* block */)a0;
- (void)requestFansClubInfo;
- (void).cxx_destruct;

@end
