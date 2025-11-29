@class NSString, NSNumber, IESECCommentShowDataManager;

@interface IESECReviewsDetailViewControllerConfiguration : NSObject

@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSNumber *currentCommentID;
@property (retain, nonatomic) IESECCommentShowDataManager *dataManager;
@property (copy, nonatomic) NSString *entrance;

- (void).cxx_destruct;
- (id)initWithProductID:(id)a0;

@end
