@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEECommerceFeedCommentContext : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSNumber *commentCount;
@property (copy, nonatomic) NSString *commentExtra;

- (void).cxx_destruct;

@end
