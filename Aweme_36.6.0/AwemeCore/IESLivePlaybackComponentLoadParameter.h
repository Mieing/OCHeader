@class HTSEventContext, IESLivePlaybackComponentContext;
@protocol IESLiveDI;

@interface IESLivePlaybackComponentLoadParameter : NSObject

@property (retain, nonatomic) IESLivePlaybackComponentContext *entryContext;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveDI> roomDI;

- (void).cxx_destruct;

@end
