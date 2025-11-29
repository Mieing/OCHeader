@class NSString;

@interface TextStateEmojiBoardReportObject : NSObject

@property (nonatomic) unsigned long long showTimeStamp;
@property (nonatomic) unsigned long long hideTimeStamp;
@property (retain, nonatomic) NSString *publishId;
@property (nonatomic) BOOL isRecentUsedSectionValid;
@property (nonatomic) BOOL isRecommendSectionValid;
@property (nonatomic) long long selectIconFrom;

- (void)showEmojiBoard;
- (void)hideEmojiBoard;
- (void)tapEmojiIcon:(id)a0 groupDescription:(id)a1 iconSelectFrom:(long long)a2;
- (void).cxx_destruct;

@end
