@class NSString, NSDate;

@interface AWEECOMIMMessageDataToIMModel : NSObject <IESIMThirdPartyMessageMetaInfoProtocol>

@property (nonatomic) long long serverMessageID;
@property (nonatomic) int bizId;
@property (nonatomic) long long indexInConversation;
@property (retain, nonatomic) NSDate *createdAt;
@property (retain, nonatomic) NSString *hint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)lastMsgContentWithMessage:(id)a0 conversation:(id)a1;

@end
