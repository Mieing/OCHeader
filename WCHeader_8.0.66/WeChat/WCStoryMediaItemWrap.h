@class WCStoryDataItem, WCStoryMediaItem;

@interface WCStoryMediaItemWrap : NSObject

@property (retain, nonatomic) WCStoryMediaItem *mediaItem;
@property (retain, nonatomic) WCStoryDataItem *parent;
@property (nonatomic) unsigned int index;

- (id)init;
- (void).cxx_destruct;

@end
