@class NSArray;

@interface AWEIMEnterChatInsertMsgResponseModel : AWEBaseApiModel

@property (readonly, nonatomic) NSArray *messageInfoList;

+ (id)messageInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
