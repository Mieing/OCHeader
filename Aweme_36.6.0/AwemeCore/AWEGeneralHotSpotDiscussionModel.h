@class NSArray, NSString, AWEAwemeModel;

@interface AWEGeneralHotSpotDiscussionModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *awemeInfo;
@property (retain, nonatomic) NSArray *commentList;
@property (nonatomic) long long cardStyle;
@property (retain, nonatomic) NSString *sentenceId;
@property (retain, nonatomic) NSString *keyword;
@property (retain, nonatomic) NSString *title;

+ (id)commentListJSONTransformer;
+ (id)awemeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
