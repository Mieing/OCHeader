@class NSString, NSNumber;

@interface AWEIMEmojiRequestContext : NSObject

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *topK;
@property (copy, nonatomic) NSNumber *stickerType;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *queryType;
@property (copy, nonatomic) NSString *convID;
@property (copy, nonatomic) NSString *toUserID;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) double timeout;

- (void).cxx_destruct;

@end
