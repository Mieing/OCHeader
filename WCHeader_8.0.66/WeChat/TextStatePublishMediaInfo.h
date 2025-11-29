@class MMTextStateMediaItem, MMTextStateVideoItem, NSString;

@interface TextStatePublishMediaInfo : NSObject

@property (nonatomic) unsigned int mediaSource;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) MMTextStateMediaItem *imageLocalItem;
@property (retain, nonatomic) MMTextStateVideoItem *videoLocalItem;
@property (retain, nonatomic) MMTextStateMediaItem *mediaItem;
@property (nonatomic) BOOL mediaBlur;
@property (nonatomic) struct CGSize { double width; double height; } mediaScreenSize;
@property (nonatomic) unsigned int textStateCreateTime;
@property (retain, nonatomic) NSString *textStateUsername;
@property (nonatomic) unsigned long long mediaDuration;
@property (nonatomic) BOOL canEditBlur;
@property (nonatomic) BOOL canEditLive;

+ (id)mediaInfoFromUsername:(id)a0 textState:(id)a1;
+ (id)mediaInfoFromImageItem:(id)a0;
+ (id)mediaInfoFromVideoItem:(id)a0;
+ (id)mediaInfoFromLivePhotoItem:(id)a0;

- (id)init;
- (id)generatePublishedTextState;
- (void).cxx_destruct;

@end
