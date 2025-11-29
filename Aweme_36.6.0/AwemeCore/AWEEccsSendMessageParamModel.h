@class NSString, NSNumber, NSDictionary;

@interface AWEEccsSendMessageParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *messageType;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSDictionary *localExt;
@property (nonatomic) BOOL skipRealSend;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
