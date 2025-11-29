@class NSNumber, NSString;

@interface AWEVideoReplyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *awemeID;
@property (copy, nonatomic) NSNumber *commentID;
@property (copy, nonatomic) NSNumber *aliasCommentID;
@property (retain, nonatomic) NSNumber *replyAwemeVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
