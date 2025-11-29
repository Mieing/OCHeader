@protocol IESAccountBusinessUserProtocol;

@interface IESAccountSaaSUserModel : IESAccountPassportModel

@property (retain, nonatomic) id<IESAccountBusinessUserProtocol> businessModel;

- (void)updateBusinessUser:(id)a0;
- (void).cxx_destruct;

@end
