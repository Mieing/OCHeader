@interface AWESearchWebTranscodeContainerContext : NSObject

@property (nonatomic) BOOL isVideoTranscode;
@property (nonatomic) BOOL isNovelTranscode;
@property (nonatomic) BOOL isPreload;
@property (nonatomic) BOOL isNovelPreload;
@property (nonatomic) BOOL disableDarkMode;
@property (nonatomic) BOOL useTranscodeingManager;
@property (copy, nonatomic) id /* block */ didRecieveTranscodeBlock;
@property (copy, nonatomic) id /* block */ didRecieveNovelTranscodeResultBlock;

- (void).cxx_destruct;

@end
