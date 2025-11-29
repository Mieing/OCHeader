@class NSString, NSNumber, AWEURLModel;

@interface AWECommentHotspotInfoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *sentence;
@property (copy, nonatomic) NSNumber *sentenceID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *datasourceJsonStr;
@property (nonatomic) BOOL isGray;
@property (retain, nonatomic) AWEURLModel *coverURLModel;
@property (copy, nonatomic) NSString *discussionPageSchema;

+ (id)coverURLModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
