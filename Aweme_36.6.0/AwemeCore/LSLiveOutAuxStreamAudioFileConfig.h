@class NSURL, NSString;

@interface LSLiveOutAuxStreamAudioFileConfig : NSObject

@property (retain, nonatomic) NSURL *audioURL;
@property (retain, nonatomic) NSString *audioId;
@property (copy, nonatomic) id /* block */ audioPlayErrorBlock;
@property (copy, nonatomic) id /* block */ audioPlayEndBlock;
@property (copy, nonatomic) id /* block */ audioPlayWillStartBlock;
@property (copy, nonatomic) id /* block */ audioPlayDidStartBlock;

- (void).cxx_destruct;

@end
