@class NSString;
@protocol Optional;

@interface RTVRoomTextChatInfo : JSONModel

@property (copy, nonatomic) NSString<Optional> *conversationID;
@property (copy, nonatomic) NSString<Optional> *conversationIMID;

+ (id)keyMapper;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
