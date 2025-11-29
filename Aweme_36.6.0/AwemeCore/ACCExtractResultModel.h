@class NSString, NSDictionary, ACCExtractPackageResultItem, NSArray;

@interface ACCExtractResultModel : NSObject

@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) unsigned long long period;
@property (copy, nonatomic) NSString *fileURI;
@property (nonatomic) unsigned long long recommendStrategy;
@property (retain, nonatomic) NSDictionary *trackDic;
@property (retain, nonatomic) ACCExtractPackageResultItem *packageResult;
@property (retain, nonatomic) ACCExtractPackageResultItem *cloudPackageResult;
@property (copy, nonatomic) NSArray *extractedFrames;
@property (copy, nonatomic) NSArray *extractedFeatures;

- (id)featureStrWithC1500;
- (id)featureStr;
- (void).cxx_destruct;
- (BOOL)isValid;

@end
