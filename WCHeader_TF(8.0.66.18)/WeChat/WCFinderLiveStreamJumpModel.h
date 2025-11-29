@class NSString, WCFinderLiveTabInfo;

@interface WCFinderLiveStreamJumpModel : NSObject

@property (retain, nonatomic) WCFinderLiveTabInfo *liveTab;
@property (retain, nonatomic) NSString *relatedWording;
@property (nonatomic) BOOL isFromLiveComple;

+ (id)finderLiveStreamJumpModelFrom:(id)a0;

- (id)toFinderLiveStreamJumper;
- (void).cxx_destruct;

@end
