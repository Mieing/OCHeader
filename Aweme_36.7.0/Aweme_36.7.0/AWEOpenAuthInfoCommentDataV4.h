@class NSString, NSArray;

@interface AWEOpenAuthInfoCommentDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoCommentDataProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) long long showCommentStatus;
@property (copy, nonatomic) NSString *showCommentMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
