@class NSString, NSNumber;

@interface IESLiveSaveHighlightVideoParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSNumber *adrDuplicateDetect;
@property (copy, nonatomic) NSString *anchorId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
