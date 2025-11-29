@class NSString, NSDictionary, NSArray;

@interface AWEIMNewGroupInviteCardViewModelEnterGroupModel : NSObject

@property (readonly, copy) NSString *conversationID;
@property (readonly, copy) NSString *enterMethod;
@property (readonly, copy) NSDictionary *enterpriseTrackParams;
@property (readonly, copy, nonatomic) NSArray *addedParticipants;

- (id)initWithCid:(id)a0 enterMethod:(id)a1 enterpriseTrackParams:(id)a2;
- (void)updateAddedParticipants:(id)a0;
- (void).cxx_destruct;

@end
