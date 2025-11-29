@class NSString;

@interface AWEIMConversationAceeptMenuItem : NSObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL isHighlight;
@property (nonatomic) BOOL isHandling;
@property (copy, nonatomic) id /* block */ actionBlock;

- (void).cxx_destruct;

@end
