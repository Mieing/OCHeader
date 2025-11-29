@class NSNumber, NSString;

@interface AWEAwemeDraftModel : ACCBaseApiModel

@property (copy, nonatomic) NSNumber *awemeId;
@property (copy, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSNumber *draftId;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
