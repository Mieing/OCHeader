@class NSString;

@interface CameraScanGoodsItemExchangeInfo : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long itemStatus;
@property (nonatomic) long long itemCategoryId;
@property (nonatomic) BOOL needPoi;
@property (retain, nonatomic) NSString *imageUrl;

- (void).cxx_destruct;

@end
