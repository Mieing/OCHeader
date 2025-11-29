@class NSString;

@interface EditStoryImageAttr : NSObject <NSCoding>

@property (nonatomic, getter=isStoryHideInTimeLine) BOOL storyHideInTimeline;
@property (nonatomic, getter=isLyricsOn) BOOL lyricsOn;
@property (copy, nonatomic) NSString *mainText;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
