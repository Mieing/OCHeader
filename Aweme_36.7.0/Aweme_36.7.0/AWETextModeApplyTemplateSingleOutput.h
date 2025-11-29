@class NSString, NSError, AWECodeGenGenImageInfoModel;

@interface AWETextModeApplyTemplateSingleOutput : NSObject

@property (copy, nonatomic) NSString *downloadFilePath;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AWECodeGenGenImageInfoModel *imageGenModel;

- (void).cxx_destruct;

@end
