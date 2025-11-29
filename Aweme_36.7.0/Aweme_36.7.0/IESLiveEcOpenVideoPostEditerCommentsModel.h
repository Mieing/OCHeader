@class NSString, NSNumber, NSArray;

@interface IESLiveEcOpenVideoPostEditerCommentsModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *contentCount;
@property (copy, nonatomic) NSString *orderID;
@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSString *productID;
@property (retain, nonatomic) NSNumber *rankGood;
@property (copy, nonatomic) NSArray *videos;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
