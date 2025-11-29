@class NSArray, QBrandPromotionContext, NSURLSessionDataTask, QPolyline;
@protocol QBrandPromotionGridModelDelegate;

@interface QBrandPromotionGridModel : QGridModel

@property (nonatomic) long long downloadStatus;
@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (weak, nonatomic) QBrandPromotionContext *brandPromotionContext;
@property (retain, nonatomic) QPolyline *polyline;
@property (weak, nonatomic) id<QBrandPromotionGridModelDelegate> delegate;
@property (copy, nonatomic) NSArray *items;

- (void)downloadPromotionDataIfNeeded;
- (void)cancelRequest;
- (void)downloadPromotionData;
- (void)handleResponseData:(id)a0;
- (void)handleResponseError:(id)a0;
- (void)cancelRequestTask;
- (void)dealloc;
- (id)initWithScael:(unsigned int)a0 x:(int)a1 y:(int)a2 context:(id)a3;
- (id)createChildrenHavingItems;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
