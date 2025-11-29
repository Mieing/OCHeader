@class NSString;

@interface AWEImageCommentPublishVideoModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *imageCommentID;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeID;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeTitle;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeAuthorName;
@property (copy, nonatomic) NSString *imageCommentOriginalAwemeAuthorID;
@property (nonatomic) long long imageCommentVersion;
@property (nonatomic) long long commentType;
@property (copy, nonatomic) NSString *highlightText;
@property (copy, nonatomic) NSString *highLightSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
