@class NSString, BDECPigeonConversationHintPlaceHolderModel;

@interface BDECPigeonConversationHintModel : NSObject

@property (copy, nonatomic) NSString *hintContent;
@property (retain, nonatomic) BDECPigeonConversationHintPlaceHolderModel *placeHolder;
@property (nonatomic) long long hintType;
@property (nonatomic) BOOL isEqualLastMessage;
@property (nonatomic) BOOL exposeByLastMessage;

- (void).cxx_destruct;

@end
