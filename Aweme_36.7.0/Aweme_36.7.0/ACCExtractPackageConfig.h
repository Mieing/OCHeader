@class NSString, NSArray, NSDictionary;
@protocol ACCExtractPackageTaskProtocol;

@interface ACCExtractPackageConfig : NSObject

@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) unsigned long long subType;
@property (nonatomic) BOOL ignoreCache;
@property (nonatomic) BOOL pureMode;
@property (nonatomic) BOOL skipUploadFrames;
@property (retain, nonatomic) id<ACCExtractPackageTaskProtocol> outerTask;
@property (copy, nonatomic) NSArray *frames;
@property (copy, nonatomic) NSArray *features;
@property (copy, nonatomic) NSDictionary *uploadParams;
@property (copy, nonatomic) NSDictionary *extras;
@property (nonatomic) unsigned long long materialsArrayType;

- (id)bizType;
- (id)generateResultId;
- (void).cxx_destruct;

@end
