@class NSString, NSError;
@protocol IESIMConversationOperationResponse;

@interface AWEIMGroupCreationResult : NSObject

@property (readonly, copy, nonatomic) NSString *conversationIdentifier;
@property (readonly, nonatomic) id<IESIMConversationOperationResponse> response;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) long long checkCode;
@property (readonly, copy, nonatomic) NSString *checkMessage;
@property (readonly, copy, nonatomic) NSString *extraInfo;
@property (readonly, nonatomic) NSError *error;

+ (id)resultWithConversationIdentifier:(id)a0 response:(id)a1 status:(int)a2 checkCode:(long long)a3 checkMessage:(id)a4 extraInfo:(id)a5 error:(id)a6;

- (id)initWithConversationIdentifier:(id)a0 response:(id)a1 status:(int)a2 checkCode:(long long)a3 checkMessage:(id)a4 extraInfo:(id)a5 error:(id)a6;
- (void).cxx_destruct;

@end
