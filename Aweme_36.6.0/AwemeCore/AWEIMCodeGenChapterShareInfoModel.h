@class NSString;

@interface AWEIMCodeGenChapterShareInfoModel : AWEBaseDataModel

@property (nonatomic) long long itemId;
@property (nonatomic) int showStatus;
@property (nonatomic) int chapterNodeIndex;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSString *modifiedChapterTitle;
@property (copy, nonatomic) NSString *modifiedChapterDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
