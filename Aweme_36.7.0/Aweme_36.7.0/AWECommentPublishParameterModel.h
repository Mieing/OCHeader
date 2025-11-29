@class NSString, AWECommentInputContentModel, NSDictionary, NSNumber, AWECommentTrackerContext;

@interface AWECommentPublishParameterModel : NSObject

@property (copy, nonatomic) NSString *generalItemID;
@property (copy, nonatomic) NSString *serviceID;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *replyCommentID;
@property (copy, nonatomic) NSString *replySubCommentID;
@property (copy, nonatomic) NSString *replySubCommentAuthorName;
@property (copy, nonatomic) NSString *replyCommentToken;
@property (copy, nonatomic) NSString *itemToken;
@property (retain, nonatomic) AWECommentInputContentModel *contentModel;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) AWECommentTrackerContext *trackContext;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL isFamiliar;
@property (nonatomic) BOOL isFromPaste;
@property (copy, nonatomic) NSString *lastCopyCommentID;
@property (copy, nonatomic) NSString *currentCommentCount;
@property (nonatomic) BOOL isVideoComment;
@property (nonatomic) BOOL isRetry;
@property (nonatomic) BOOL isDirectSend;
@property (nonatomic) BOOL isWithGroupShare;
@property (copy, nonatomic) NSString *groupCreateType;
@property (copy, nonatomic) NSString *groupShareConvID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *sendMethod;
@property (copy, nonatomic) NSString *cityInfoString;
@property (nonatomic) BOOL isNoNeedUserInfo;

- (void).cxx_destruct;
- (id)init;

@end
