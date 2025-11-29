@class FinderLiveBoxId, NSString, WCFinderLiveMsgSessionInfo;

@interface MMFinderLiveProductQuestionBoxItem : NSObject

@property (retain, nonatomic) WCFinderLiveMsgSessionInfo *session;
@property (nonatomic) BOOL hasMsg;
@property (nonatomic) BOOL hasLoaded;
@property (retain, nonatomic) FinderLiveBoxId *boxId;
@property (copy, nonatomic) id /* block */ loadedCallback;
@property (readonly, nonatomic) NSString *sessionId;
@property (copy, nonatomic) id /* block */ hasMsgCallback;

+ (id)genProductQuestionBoxWithSession:(id)a0;

- (id)initWithSession:(id)a0;
- (void)createBoxId;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCurrHasMsg;
- (void)onBoxLoaded;
- (void)checkSessionHasMsg;
- (void).cxx_destruct;

@end
