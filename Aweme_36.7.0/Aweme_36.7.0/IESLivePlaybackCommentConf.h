@class NSString;

@interface IESLivePlaybackCommentConf : NSObject

@property (nonatomic) BOOL isLandscape;
@property (nonatomic) double slideOffset;
@property (copy, nonatomic) NSString *placeholderText;

- (id)initWithDefaultConf;
- (void).cxx_destruct;

@end
