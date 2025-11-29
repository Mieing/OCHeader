@class NSString, NSNumber, AWEAwemeModel;

@interface AWEAdEvaluateCommentContext : NSObject <AWEAdEvaluateCommentContext>

@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *componentID;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
