@class NSString, AWEStudioCaptionQueryModel;

@interface AWEStudioCaptionCommitModel : ACCBaseApiModel

@property (retain, nonatomic) AWEStudioCaptionQueryModel *videoCaption;
@property (nonatomic) BOOL mandarinTranslationDisabled;
@property (retain, nonatomic) NSString *language;

+ (id)captionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
