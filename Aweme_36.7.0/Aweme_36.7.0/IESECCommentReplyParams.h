@class NSString, NSDictionary, NSNumber;

@interface IESECCommentReplyParams : NSObject <IESECCommentReplyParams>

@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *productID;
@property (copy, nonatomic) NSString *highlightCommentID;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL isAuthor;
@property (copy, nonatomic) NSString *authorName;
@property (nonatomic) BOOL canReply;
@property (nonatomic) BOOL isForceShowInputPanel;
@property (retain, nonatomic) NSNumber *commentCount;
@property (copy, nonatomic) id /* block */ didUpdateTotalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
