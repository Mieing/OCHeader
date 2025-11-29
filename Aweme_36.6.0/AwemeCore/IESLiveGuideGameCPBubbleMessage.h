@class NSString;

@interface IESLiveGuideGameCPBubbleMessage : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *msgID;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long msgType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)msgIDJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
