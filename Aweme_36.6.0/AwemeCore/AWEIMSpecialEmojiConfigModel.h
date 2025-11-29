@class NSString, NSDictionary;

@interface AWEIMSpecialEmojiConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *senderShow;
@property (retain, nonatomic) NSString *receiverShow;
@property (retain, nonatomic) NSString *randomShow;
@property (retain, nonatomic) NSString *continueShow;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSenderShow;
- (BOOL)isReceiverShow;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
