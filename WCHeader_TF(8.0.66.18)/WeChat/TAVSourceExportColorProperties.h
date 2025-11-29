@class NSString;

@interface TAVSourceExportColorProperties : NSObject

@property (copy, nonatomic) NSString *colorPrimaries;
@property (copy, nonatomic) NSString *transferFunction;
@property (copy, nonatomic) NSString *YCbCrMatrix;

+ (id)dp3ColorProperties;
+ (id)hdColorProperties;

- (id)init;
- (id)makeSettingsDictionary;
- (void).cxx_destruct;

@end
