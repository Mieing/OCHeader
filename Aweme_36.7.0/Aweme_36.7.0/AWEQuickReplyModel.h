@class NSString, NSNumber;

@interface AWEQuickReplyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *replyText;
@property (nonatomic) unsigned long long replyType;
@property (retain, nonatomic) NSNumber *replyID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replyTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
