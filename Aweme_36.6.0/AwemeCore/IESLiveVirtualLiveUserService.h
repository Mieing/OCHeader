@class NSString, NSMutableArray;
@protocol IESLiveInteractUserModel;

@interface IESLiveVirtualLiveUserService : NSObject <IESLiveInteractiveUserService>

@property (copy, nonatomic) NSString *linkmicId;
@property (copy, nonatomic) NSString *anchorLinkmicId;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> anchorInteractUserModel;
@property (readonly, nonatomic) NSMutableArray *activedList;
@property (retain, nonatomic) id<IESLiveInteractUserModel> host;
@property (retain, nonatomic) id<IESLiveInteractUserModel> me;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userByUserId:(id)a0;
- (id)userByLinkmicId:(id)a0;
- (id)userBySecUserId:(id)a0;
- (void)setUpService:(id)a0;
- (BOOL)updateSpeakingUsers:(id)a0;
- (BOOL)updateSelfSpeaking:(unsigned long long)a0;
- (id)userByBackupLinkmicId:(id)a0;
- (id)userByRole:(int)a0;
- (id)initWithUser:(id)a0 linkmicId:(id)a1 anchorLinkmicId:(id)a2;
- (void).cxx_destruct;

@end
