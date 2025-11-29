@class NSString, AWEURLModel;

@interface AWEPOICommentVideoMetaModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *vid;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long duration;
@property (retain, nonatomic) AWEURLModel *poster;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
