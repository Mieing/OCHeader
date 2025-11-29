@class AWEAIGCBusinessRequestModel, NSString, NSDictionary, UIImage;

@interface AWEStudioAIGCAsyncTaskInputParams : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (copy, nonatomic) NSString *placeholderTaskId;
@property (copy, nonatomic) NSString *preUploadTOSTaskId;
@property (copy, nonatomic) NSString *aigcType;
@property (nonatomic) long long queryType;
@property (nonatomic) long long taskType;
@property (retain, nonatomic) Class businessHandler;
@property (copy, nonatomic) NSString *businessJSONStr;
@property (copy, nonatomic) NSString *propID;
@property (copy, nonatomic) NSString *propName;
@property (copy, nonatomic) NSString *waitTimeTip;
@property (nonatomic) double estimatedDuration;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UIImage *pushImage;
@property (copy, nonatomic) NSString *pushImagePath;
@property (retain, nonatomic) NSString *loraResourceType;
@property (retain, nonatomic) NSDictionary *requestParams;
@property (retain, nonatomic) AWEAIGCBusinessRequestModel *requestModel;
@property (retain, nonatomic) NSDictionary *preloadTrackParams;
@property (nonatomic) BOOL isMulti;

- (void).cxx_destruct;
- (BOOL)isValid;

@end
