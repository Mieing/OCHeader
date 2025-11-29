@class NSArray;

@interface AWEIMGetUserBubbleRequestContext : NSObject

@property (copy, nonatomic) NSArray *bubbleIDs;
@property (nonatomic) BOOL needUserPossessionInfo;
@property (nonatomic) BOOL needUserCurrentBubble;

- (void).cxx_destruct;

@end
