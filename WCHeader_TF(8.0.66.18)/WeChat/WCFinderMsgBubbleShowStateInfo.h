@class NSArray;

@interface WCFinderMsgBubbleShowStateInfo : NSObject

@property (nonatomic) unsigned long long unReadMsgCount;
@property (nonatomic) BOOL showPrivateMsgBubble;
@property (retain, nonatomic) NSArray *commentFailInfoArray;

- (void).cxx_destruct;

@end
