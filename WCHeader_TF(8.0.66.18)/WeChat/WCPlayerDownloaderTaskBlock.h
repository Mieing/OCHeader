@interface WCPlayerDownloaderTaskBlock : NSObject

@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ moovReadyBlock;
@property (copy, nonatomic) id /* block */ m3u8ReadyBlock;
@property (copy, nonatomic) id /* block */ downloadCompleteBlock;

- (void).cxx_destruct;

@end
