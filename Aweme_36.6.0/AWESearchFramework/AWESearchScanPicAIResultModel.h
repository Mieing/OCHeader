@class NSArray, NSString, UIImage;

@interface AWESearchScanPicAIResultModel : NSObject

@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (copy, nonatomic) NSArray *processInfo;
@property (nonatomic) BOOL isPitayaBusinessSuccess;
@property (nonatomic) long long pitayaErrorCode;
@property (copy, nonatomic) NSString *pitayaErrorMessage;
@property (copy, nonatomic) NSString *pitayaBusinessName;
@property (retain, nonatomic) UIImage *nImage;
@property (nonatomic) double isQuestionIntention;

- (void).cxx_destruct;

@end
