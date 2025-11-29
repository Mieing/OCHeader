@class NSString, NSDictionary, NSArray, NSError;
@protocol IESIMMessageProtocol;

@interface IESIMSendMessageResponse : NSObject

@property (copy, nonatomic) NSString *logId;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) long long checkCode;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSDictionary *statusMsgDict;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *extraJsonString;
@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL isAsyncSend;
@property (copy, nonatomic) NSArray *processDurationMonitorArray;
@property (retain, nonatomic) id<IESIMMessageProtocol> message;
@property (nonatomic) BOOL isChatRoom;
@property (copy, nonatomic) NSDictionary *ext;
@property (copy, nonatomic) NSDictionary *msgTags;

- (void).cxx_destruct;

@end
