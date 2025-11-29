@class NSArray, NSString, NSDictionary, AWECommentRequestExtraModel;

@interface AWEFeedEnterFullPagePayload : NSObject

@property (copy, nonatomic) NSArray *commentIDs;
@property (copy, nonatomic) NSString *highlightID;
@property (nonatomic) long long currentPaginatedIndex;
@property (copy, nonatomic) NSString *priorityType;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWECommentRequestExtraModel *commentExtraParams;

- (id)logJsonStr;
- (void).cxx_destruct;

@end
