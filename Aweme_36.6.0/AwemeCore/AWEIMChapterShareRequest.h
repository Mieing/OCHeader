@class NSArray, NSString;

@interface AWEIMChapterShareRequest : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *chapterShareReqInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)chapterShareReqInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
