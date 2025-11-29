@class UIImage, NSString, NSDictionary;

@interface IESECLiveAnchorFlashSaleCreateViewConfig : NSObject

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *shopID;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *flashSaleUserId;
@property (copy, nonatomic) NSString *flashSaleUserName;
@property (nonatomic) double clickTime;
@property (copy, nonatomic) NSDictionary *lastProperties;
@property (copy, nonatomic) NSString *lastCategoryName;
@property (copy, nonatomic) NSString *lastCategoryCids;

- (void).cxx_destruct;

@end
