@class NSString, NSDictionary, UIImage, HTSVideoData, NSError;

@interface AWEStudioFlowResultModel : NSObject

@property (nonatomic) unsigned long long expectSource;
@property (nonatomic) unsigned long long realSource;
@property (retain, nonatomic) UIImage *takePictureImage;
@property (nonatomic) unsigned long long expectTakePictureType;
@property (nonatomic) unsigned long long takePictureCurrentType;
@property (copy, nonatomic) NSDictionary *takePictureInformation;
@property (retain, nonatomic) HTSVideoData *recordVideoData;
@property (nonatomic) double recordVideoDuration;
@property (copy, nonatomic) NSString *recordVideoPath;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL recordVideoAutoCompletion;

- (void).cxx_destruct;

@end
