@class NSString, NSDictionary, NSArray, NSObject;
@protocol OS_dispatch_semaphore;

@interface AWEIMChatInputTextDraftModel : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *quoteReplyMessageID;
@property (copy, nonatomic) NSDictionary *customQuoteInfo;
@property (copy, nonatomic) NSString *sessionID;
@property (nonatomic) double createAt;
@property (retain, nonatomic) NSArray *richTextInfos;

- (id)toDraftJsonContent;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;

@end
