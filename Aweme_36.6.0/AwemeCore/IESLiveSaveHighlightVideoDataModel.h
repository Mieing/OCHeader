@class NSString;

@interface IESLiveSaveHighlightVideoDataModel : IESLiveBridgeModel

@property (nonatomic) BOOL success;
@property (copy, nonatomic) NSString *localVideoId;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
