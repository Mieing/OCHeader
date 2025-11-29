@class WCMediaItem, WCDataItem;

@interface WCMediaItemWrap : NSObject

@property (retain, nonatomic) WCMediaItem *mediaItem;
@property (retain, nonatomic) WCDataItem *parent;
@property (nonatomic) unsigned int index;

- (id)init;
- (void).cxx_destruct;

@end
