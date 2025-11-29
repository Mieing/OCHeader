@class NSNumber, NSString, NSArray;

@interface AWELiveSelectMediaParamModel : IESLiveBridgeModel

@property (nonatomic) long long mode;
@property (retain, nonatomic) NSNumber *imageCountLimit;
@property (retain, nonatomic) NSNumber *videoCountLimit;
@property (retain, nonatomic) NSNumber *maxImageFileSize;
@property (retain, nonatomic) NSNumber *durationLimit;
@property (nonatomic) BOOL videoNeedCoverData;
@property (copy, nonatomic) NSString *hintText;
@property (copy, nonatomic) NSArray *preSelectedPaths;
@property (nonatomic) BOOL isPreSelectReally;

+ (id)modelCustomPropertyMapper;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
