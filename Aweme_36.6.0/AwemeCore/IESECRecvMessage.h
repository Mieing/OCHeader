@class NSString;

@interface IESECRecvMessage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *msgID;
@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *seqID;
@property (copy, nonatomic) NSString *bizMsgID;
@property (nonatomic) unsigned long long contentFormat;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) id content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentJSONTransformer;
+ (id)contentFormatJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setContentFormatString:(id)a0;
- (void).cxx_destruct;

@end
