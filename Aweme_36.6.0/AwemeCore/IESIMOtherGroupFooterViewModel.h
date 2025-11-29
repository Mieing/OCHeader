@class NSArray, AWEIMConversationPuller, NSString;

@interface IESIMOtherGroupFooterViewModel : NSObject

@property (retain, nonatomic) AWEIMConversationPuller *conversationPuller;
@property (retain, nonatomic) NSArray *currentSocialGroupArray;
@property (nonatomic) long long fetchPageCount;
@property (retain, nonatomic) NSString *otherGroupDescription;
@property (nonatomic) long long socialGroupCount;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;

- (void)p_fetchData;
- (void)p_fetchAllGroupShareModelByLocalDB;
- (BOOL)p_isSocialGroupNormal:(id)a0;
- (id)p_getDescription;
- (void)p_prepareDataWithShareModelList:(id)a0 hasMore:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;

@end
