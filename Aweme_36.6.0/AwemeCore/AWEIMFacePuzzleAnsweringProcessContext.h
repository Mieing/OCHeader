@class AWEIMUser, NSString, NSDictionary, BFTask, NSNumber, AWEIMFacePuzzleAnsweringProcessViewController;
@protocol IESIMConversationProtocol;

@interface AWEIMFacePuzzleAnsweringProcessContext : NSObject

@property (nonatomic) double st;
@property (nonatomic) BOOL needOverTime;
@property (nonatomic) double overTime;
@property (readonly, copy, nonatomic) NSString *convID;
@property (readonly, nonatomic) id<IESIMConversationProtocol> con;
@property (readonly, copy, nonatomic) NSString *secAnswerUID;
@property (readonly, copy, nonatomic) NSString *secExerciseUID;
@property (readonly, nonatomic) AWEIMUser *exerciseUser;
@property (readonly, nonatomic) AWEIMUser *answerUser;
@property (readonly, copy, nonatomic) NSString *secExerciseID;
@property (readonly, nonatomic) BOOL isOutside;
@property (readonly, nonatomic) NSDictionary *settings;
@property (readonly, nonatomic) BFTask *questionGetResponseTask;
@property (readonly, nonatomic) NSNumber *messageServerID;
@property (readonly, nonatomic) NSString *messageID;
@property (readonly, nonatomic) BOOL isGameing;
@property (readonly, weak, nonatomic) AWEIMFacePuzzleAnsweringProcessViewController *hostVC;
@property (readonly, nonatomic) BFTask *questionConstructTask;
@property (readonly, nonatomic) NSDictionary *extra;

- (void)gameOver;
- (id)p_user;
- (id)p_con:(id)a0;
- (void)p_constructQuestion;
- (void)p_fetchQuestionInfo;
- (id)p_constructQuestion:(id)a0;
- (BOOL)checkResponse:(id)a0;
- (id)initWithSecExerciseID:(id)a0 secExerciseUID:(id)a1 secAnswerUID:(id)a2 cid:(id)a3 isOutside:(BOOL)a4 messageServerID:(id)a5 hostVC:(id)a6 messageID:(id)a7 params:(id)a8;
- (id)prepareProps;
- (void).cxx_destruct;

@end
