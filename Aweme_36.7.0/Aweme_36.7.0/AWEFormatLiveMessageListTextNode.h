@class AWEFormatLiveMessageListLoadingView;

@interface AWEFormatLiveMessageListTextNode : HTSLiveMessageListNode

@property (nonatomic) BOOL shouldShow;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) AWEFormatLiveMessageListLoadingView *loadingView;

- (void)removeLoading;
- (BOOL)isValidFoldNode;
- (BOOL)isValidNode;
- (void).cxx_destruct;
- (id)init;

@end
