@class NSString, NSDictionary, AWEChapterInfo, AWEURLModel;

@interface AWEIMChapterMessageModel : NSObject <NSCoding>

@property (copy, nonatomic) AWEChapterInfo *chapterInfo;
@property (copy, nonatomic) NSString *awemeTitle;
@property (nonatomic) BOOL awemeUnavailable;
@property (nonatomic) unsigned long long chapterStatus;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) long long awemeID;
@property (copy, nonatomic) NSString *authorName;
@property (retain, nonatomic) AWEURLModel *videoCover;
@property (retain, nonatomic) AWEURLModel *avatarThumb;
@property (nonatomic) long long chapterNodeIndex;
@property (nonatomic) long long shareTimestamp;
@property (nonatomic) long long chapterNodeTimestamp;
@property (nonatomic) long long isRecommendChapter;

- (id)initWithAwemeModel:(id)a0 chapterIndex:(long long)a1 shareTimestamp:(long long)a2 isRecommendChapter:(long long)a3;
- (id)chapterInfoMessageDict;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
