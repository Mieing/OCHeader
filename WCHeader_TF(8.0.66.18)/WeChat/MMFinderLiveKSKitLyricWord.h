@class NSString;

@interface MMFinderLiveKSKitLyricWord : NSObject

@property (nonatomic) int startTime;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *content;
@property (readonly, nonatomic) int endTime;
@property (nonatomic) struct CGSize { double width; double height; } labelSize;

+ (id)parseLyricWord:(id)a0 inSentence:(id)a1;
+ (BOOL)isLyricWordContentCHN:(id)a0;

- (id)description;
- (void).cxx_destruct;

@end
