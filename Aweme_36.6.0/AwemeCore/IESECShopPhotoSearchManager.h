@class NSString, IESECShopPhotoSearchScanParams;

@interface IESECShopPhotoSearchManager : NSObject

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *enableGoodsScan;
@property (copy, nonatomic) NSString *scanType;
@property (retain, nonatomic) IESECShopPhotoSearchScanParams *scanParams;

- (void)redirectToPhotoSearchPageWithParameters:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
