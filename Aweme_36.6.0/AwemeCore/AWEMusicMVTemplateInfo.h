@class NSString, NSArray;

@interface AWEMusicMVTemplateInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long templateID;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) NSString *expr;
@property (nonatomic) long long numSegs;
@property (nonatomic) BOOL isCommon;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *zipURL;
@property (copy, nonatomic) NSArray *videoSegs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoSegsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
