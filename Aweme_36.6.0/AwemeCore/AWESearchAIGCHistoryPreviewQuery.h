@class NSString, AWESearchAIGCHistoryPreviewQueryImageInfo, AWESearchAIGCHistoryPreviewQueryVideoInfo;

@interface AWESearchAIGCHistoryPreviewQuery : AWEBaseApiModel

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) long long type;
@property (nonatomic) long long contentSource;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long messageCreateTime;
@property (nonatomic) BOOL answerExist;
@property (retain, nonatomic) AWESearchAIGCHistoryPreviewQueryVideoInfo *videoInfo;
@property (retain, nonatomic) AWESearchAIGCHistoryPreviewQueryImageInfo *imageInfo;

+ (id)videoInfoJSONTransformer;
+ (id)imageInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
