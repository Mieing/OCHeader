@class NSString, NSDictionary, AWEAwemeModel, NSNumber;

@interface AWEAdFeedCommentContext : NSObject <AWEAdFeedCommentContext>

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
