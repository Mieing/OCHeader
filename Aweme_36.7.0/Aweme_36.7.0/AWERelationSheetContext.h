@class NSString, AWEUserRelationContext, NSDictionary, AWEUserModel, NSNumber;

@interface AWERelationSheetContext : NSObject

@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) AWEUserRelationContext *relationContext;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *previousPage;
@property (retain, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) NSString *cardType;
@property (nonatomic) long long recommendType;
@property (retain, nonatomic) NSDictionary *addFriendExtra;
@property (copy, nonatomic) NSString *chatType;
@property (copy, nonatomic) NSString *conversationID;
@property (retain, nonatomic) NSString *fromCardType;
@property (retain, nonatomic) NSString *fromRecReason;
@property (retain, nonatomic) NSNumber *fromImprOrder;
@property (retain, nonatomic) NSString *contactName;
@property (retain, nonatomic) NSString *mateApplyMsg;
@property (retain, nonatomic) NSString *groupChatName;
@property (retain, nonatomic) NSString *groupChatAlias;

- (void).cxx_destruct;

@end
