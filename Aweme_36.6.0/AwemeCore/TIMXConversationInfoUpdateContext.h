@class NSString, NSDictionary;

@interface TIMXConversationInfoUpdateContext : NSObject

@property (nonatomic) unsigned long long updateType;
@property (retain, nonatomic) NSString *conversationId;
@property (nonatomic) long long conversationShortId;
@property (nonatomic) int inboxType;
@property (nonatomic) unsigned long long conversationType;
@property (nonatomic) BOOL isNeedFetchCoreInfo;
@property (nonatomic) BOOL isNeedFetchSettingInfo;
@property (nonatomic) BOOL isNeedFetchPaticipants;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) id /* block */ completion;

+ (id)contextWithConId:(id)a0 conversationShortId:(long long)a1 updateType:(unsigned long long)a2 inboxType:(int)a3 conversationType:(unsigned long long)a4 isNeedFetchCoreInfo:(BOOL)a5 isNeedFetchSettingInfo:(BOOL)a6 isNeedFetchPaticipants:(BOOL)a7 completion:(id /* block */)a8;

- (void).cxx_destruct;

@end
