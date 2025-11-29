@class NSString;

@interface AWEECOMIMMsgReferenceModel : NSObject

@property (copy, nonatomic) NSString *msgId;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *contentText;
@property (nonatomic) long long referenceType;
@property (nonatomic) long long rootMessageId;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSString *senderRole;
@property (copy, nonatomic) NSString *pigeonBizType;
@property (nonatomic) BOOL isShark;

- (BOOL)enableReferenceWithPigeonBizType:(id)a0;
- (void).cxx_destruct;

@end
