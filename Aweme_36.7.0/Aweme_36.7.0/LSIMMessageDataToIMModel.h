@class NSString, NSDate;

@interface LSIMMessageDataToIMModel : NSObject <IESIMThirdPartyMessageMetaInfoProtocol>

@property (nonatomic) long long serverMessageID;
@property (nonatomic) int bizId;
@property (nonatomic) long long indexInConversation;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSString *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)convertIMMessageModelWithCellModel:(id)a0;

- (id)initWithCellModel:(id)a0;
- (BOOL)updateWithPlatformServiceModel:(id)a0;
- (BOOL)updateWithConversationModel:(id)a0;
- (id)messageHintWithHeader:(id)a0 content:(id)a1 highlight:(id)a2 messageSuccess:(BOOL)a3;
- (void).cxx_destruct;

@end
