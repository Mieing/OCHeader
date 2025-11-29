@class NSString, NSDictionary;

@interface AWEIMGetUserEmojiInfoResponseModel : NSObject

@property (copy, nonatomic) NSString *targetAuthorID;
@property (nonatomic) BOOL isMember;
@property (nonatomic) BOOL isAddToEmojiStore;
@property (copy, nonatomic) NSString *targetEmojiID;
@property (retain, nonatomic) NSDictionary *targetEmoji;
@property (nonatomic) BOOL isAnyMember;
@property (copy, nonatomic) NSString *targetEmojiType;

- (void).cxx_destruct;

@end
