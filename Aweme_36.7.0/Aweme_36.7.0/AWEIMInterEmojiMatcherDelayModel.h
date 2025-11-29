@class AWEIMSpecialEmojiRelationModel, NSArray;
@protocol AWEIMInterEmojiMatcherProtocol;

@interface AWEIMInterEmojiMatcherDelayModel : NSObject

@property (retain, nonatomic) id<AWEIMInterEmojiMatcherProtocol> matcher;
@property (retain, nonatomic) AWEIMSpecialEmojiRelationModel *relation;
@property (retain, nonatomic) NSArray *fromMessages;

- (void).cxx_destruct;

@end
