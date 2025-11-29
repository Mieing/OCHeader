@class IESECShopInfoResponse, IESECStorePageContext;

@interface IESECStoreInfoControllerViewModel : NSObject

@property (retain, nonatomic) IESECStorePageContext *pageContext;
@property (retain, nonatomic) IESECShopInfoResponse *infoResponse;
@property (readonly, nonatomic) BOOL shouldShowList;
@property (readonly, nonatomic) BOOL hideAccountInfo;
@property (readonly, nonatomic) BOOL joinStatus;
@property (readonly, nonatomic) BOOL showAccountInfo;

- (id)fansClubUrl;
- (void)updateWithInfoResponse:(id)a0 pageContext:(id)a1;
- (void)requestFansClubInfo:(id /* block */)a0;
- (void)transferToFansClubBoard;
- (void).cxx_destruct;

@end
