@class NSString;
@protocol AWEYAPTransferAccountsService;

@interface IESIMYAPTransferAccountsService : HTSService <IESIMYAPTransferAccountsService>

@property (retain, nonatomic) id<AWEYAPTransferAccountsService> internalService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
