@class NSString, NSDictionary;

@interface LSIMSendMessage : NSObject

@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *createTime;
@property (nonatomic) long long senderRoleType;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (copy, nonatomic) NSString *bizRole;
@property (copy, nonatomic) NSString *pigeonMessageType;
@property (copy, nonatomic) NSDictionary *originExt;
@property (copy, nonatomic) NSDictionary *bizExt;
@property (copy, nonatomic) NSDictionary *localExt;

- (void).cxx_destruct;

@end
