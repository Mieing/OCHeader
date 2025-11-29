@class NSString, NSNumber;

@interface BDXBridgeImFetchDeletedChatsItems : BDXBridgeModel

@property (copy, nonatomic) NSString *conversationId;
@property (copy, nonatomic) NSString *conversationIconUrl;
@property (copy, nonatomic) NSString *conversationName;
@property (retain, nonatomic) NSNumber *remainDaysCount;
@property (copy, nonatomic) NSString *conversationShortId;
@property (retain, nonatomic) NSNumber *conversationType;
@property (retain, nonatomic) NSNumber *canRestoredMsgCount;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
