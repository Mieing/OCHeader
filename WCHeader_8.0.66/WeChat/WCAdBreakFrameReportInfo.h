@class WCADVideoPlayInfo;

@interface WCAdBreakFrameReportInfo : NSObject

@property (retain, nonatomic) WCADVideoPlayInfo *playInfo;
@property (nonatomic) unsigned int videoSeekCount;

- (id)init;
- (void).cxx_destruct;

@end
