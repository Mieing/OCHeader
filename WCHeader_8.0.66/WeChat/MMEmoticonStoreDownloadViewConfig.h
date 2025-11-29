@class NSArray;

@interface MMEmoticonStoreDownloadViewConfig : NSObject

@property (nonatomic) long long notPurchaseView;
@property (nonatomic) long long purchasingView;
@property (nonatomic) long long freeView;
@property (nonatomic) long long purchasedView;
@property (nonatomic) long long downloadedView;
@property (nonatomic) long long downloadFailView;
@property (nonatomic) long long expiredView;
@property (nonatomic) BOOL showProgressView;
@property (nonatomic) BOOL isDownloadCancelEnabled;
@property (nonatomic) BOOL useStaticWidth;
@property (retain, nonatomic) NSArray *additionalAvaliableBtnTypes;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
