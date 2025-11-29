@class NSArray;

@interface IESIMGroupImpl.MySocialGroupDataManager : NSObject <IESIMMySocialGroupDataManagerProtocol, IESIMGroupSettingsTurnOpenGroupMessage> {
    void /* function */ currentGroups;
    void /* unknown type, empty encoding */ conversationPuller;
    void /* unknown type, empty encoding */ pageSize;
    void /* unknown type, empty encoding */ initCount;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, copy) NSArray *currentGroups;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isLoading;

- (void)loadMoreDataWithCompletion:(id /* block */)a0;
- (id)initWithInitCount:(long long)a0;
- (void)initDataWithCompletion:(id /* block */)a0;
- (void)didConversationUpdateToPublicGroup:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearData;
- (void)dealloc;

@end
