@class NSString, NSDictionary;

@interface IESECFeedCommentContext : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (copy, nonatomic) NSString *commentExtra;

- (void).cxx_destruct;

@end
