@class NSString, NSArray, NSDictionary, NSNumber;

@interface ACCVideoCommentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (copy, nonatomic) NSString *commentMsg;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *replyId;
@property (copy, nonatomic) NSString *replyToReplyId;
@property (nonatomic) long long channelId;
@property (copy, nonatomic) NSArray *emojiURLList;
@property (nonatomic) long long replyType;
@property (copy, nonatomic) NSDictionary *extraCommentParams;
@property (retain, nonatomic) NSNumber *isAuthor;
@property (retain, nonatomic) NSNumber *relationTag;
@property (retain, nonatomic) NSNumber *isDeleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createModelFromJSON:(id)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (id)convertToJSONString;
- (void).cxx_destruct;

@end
