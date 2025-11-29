@class NSString, NSNumber;

@interface WXConversation : NSObject

@property (copy, nonatomic) NSString *conversationName;
@property (retain, nonatomic) NSNumber *isMute;
@property (retain, nonatomic) NSNumber *isTop;

+ (id)makeWithConversationName:(id)a0 isMute:(id)a1 isTop:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
