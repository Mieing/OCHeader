@class NSSet, NSString, NSError;
@protocol IESIMConversationOperationResponse;

@interface AWEIMGroupJoinResult : NSObject

@property (readonly, copy, nonatomic) NSSet *addedParticipants;
@property (readonly, nonatomic) id<IESIMConversationOperationResponse> response;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) long long checkCode;
@property (readonly, copy, nonatomic) NSString *checkMessage;
@property (readonly, copy, nonatomic) NSString *extraInfo;
@property (readonly, nonatomic) NSError *error;

+ (id)resultWithAddedParticipants:(id)a0 response:(id)a1 status:(int)a2 checkCode:(long long)a3 checkMessage:(id)a4 extraInfo:(id)a5 error:(id)a6;

- (id)initWithAddedParticipants:(id)a0 response:(id)a1 status:(int)a2 checkCode:(long long)a3 checkMessage:(id)a4 extraInfo:(id)a5 error:(id)a6;
- (void).cxx_destruct;

@end
