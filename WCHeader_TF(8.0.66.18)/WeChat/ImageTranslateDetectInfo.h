@interface ImageTranslateDetectInfo : NSObject

@property (nonatomic) BOOL isResultOK;
@property (nonatomic) unsigned int result;
@property (nonatomic) unsigned int targetRate;

+ (id)genDetectInfoWithResultError;

@end
