@class MMFinderGroupLiveChatBoxId;

@interface MMFinderGroupLiveChatRedPointModel : NSObject

@property (retain, nonatomic) MMFinderGroupLiveChatBoxId *boxId;
@property (nonatomic) BOOL hasUnreadMsg;

+ (id)genFinderBoxIdAndReaddot:(id)a0;

- (void).cxx_destruct;

@end
