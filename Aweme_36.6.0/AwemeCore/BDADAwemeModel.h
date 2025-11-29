@class NSString, BDADWindmillModel;

@interface BDADAwemeModel : NSObject

@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) BDADWindmillModel *originAdInfo;

- (void).cxx_destruct;

@end
