@class NSNumber, NSString;

@interface IESECCommentReplyDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *count;
@property (nonatomic) BOOL showReply;
@property (nonatomic) BOOL canReply;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
