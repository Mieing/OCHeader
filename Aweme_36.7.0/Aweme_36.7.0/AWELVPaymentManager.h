@class NSString, NSMutableArray;

@interface AWELVPaymentManager : NSObject <AWELVPaymentManagerProtocol>

@property (retain, nonatomic) NSMutableArray *hasPaidAlbumIDArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)updatePaidAlbumCache:(id)a0;
- (BOOL)shouldRefreshAwemePaidInfo:(id)a0;
- (void).cxx_destruct;

@end
