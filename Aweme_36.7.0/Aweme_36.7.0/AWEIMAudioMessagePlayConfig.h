@class NSArray, NSString;

@interface AWEIMAudioMessagePlayConfig : NSObject

@property (copy, nonatomic) NSArray *playList;
@property (copy, nonatomic) NSArray *messageList;
@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *replyedID;
@property (copy, nonatomic) NSString *conversationId;
@property (nonatomic) BOOL isNearbyEarPlay;
@property (copy, nonatomic) id /* block */ completion;

+ (id)instanceWithPlayList:(id)a0 conversationId:(id)a1;
+ (id)instanceWithMessageList:(id)a0 conversationId:(id)a1;

- (void).cxx_destruct;

@end
