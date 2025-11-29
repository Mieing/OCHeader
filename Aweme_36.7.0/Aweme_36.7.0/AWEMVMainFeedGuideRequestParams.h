@class NSString;

@interface AWEMVMainFeedGuideRequestParams : NSObject

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) id /* block */ queryBuilder;
@property (copy, nonatomic) id /* block */ bodyBuilder;

+ (id)create:(id)a0 authorID:(id)a1 queryBuilder:(id /* block */)a2 bodyBuilder:(id /* block */)a3;

- (void).cxx_destruct;

@end
