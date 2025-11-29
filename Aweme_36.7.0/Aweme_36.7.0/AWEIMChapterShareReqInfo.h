@class NSString;

@interface AWEIMChapterShareReqInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long itemId;
@property (nonatomic) long long shareTimestamp;
@property (nonatomic) long long chapterNodeTimestamp;
@property (nonatomic) long long chapterNodeIndex;
@property (nonatomic) long long isRecommendChapter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
