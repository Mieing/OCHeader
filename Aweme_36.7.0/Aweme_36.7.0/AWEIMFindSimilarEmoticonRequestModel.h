@class NSString;

@interface AWEIMFindSimilarEmoticonRequestModel : NSObject

@property (nonatomic) long long stickerType;
@property (nonatomic) long long stickerID;
@property (copy, nonatomic) NSString *stickerURI;
@property (retain, nonatomic) NSString *stickerURL;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) long long messageID;
@property (nonatomic) long long conversationShortID;
@property (nonatomic) long long conversationType;
@property (nonatomic) long long toUid;
@property (copy, nonatomic) NSString *commentID;

- (void).cxx_destruct;

@end
