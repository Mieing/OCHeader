@class NSString, NSArray, NSNumber;

@interface TIMXRestoreDeletedConversationInfoModel : NSObject

@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) int conversationType;
@property (copy, nonatomic) NSArray *messageIdsArray;
@property (copy, nonatomic) NSNumber *minIndex;

- (id)initWithPBModel:(id)a0;
- (id)initWithConversationID:(id)a0 shortID:(long long)a1 conversationType:(int)a2 minIndex:(id)a3 messageIDList:(id)a4;
- (void).cxx_destruct;

@end
