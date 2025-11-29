@class NSError, NSString, NSArray;

@interface AWEIMGroupChatPanelControllerRequestResult : NSObject

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic, getter=isSucceed) BOOL succeed;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isNewCreated) BOOL newCreated;
@property (readonly, copy, nonatomic) NSString *convID;
@property (readonly, copy, nonatomic) NSString *convName;
@property (readonly, copy, nonatomic) NSArray *addedParticipants;

+ (id)resultWithCancelled:(BOOL)a0 succeed:(BOOL)a1 error:(id)a2;

- (void)updateCreateGroupInfoWithNewCreated:(BOOL)a0 convID:(id)a1 convName:(id)a2;
- (void)updateJoinGroupInfoWithAddedParticipants:(id)a0;
- (id)initWithCancelled:(BOOL)a0 succeed:(BOOL)a1 error:(id)a2;
- (void).cxx_destruct;

@end
