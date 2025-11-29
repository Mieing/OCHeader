@class NSDictionary, NSString, NSArray;

@interface ACCAIGCAIProcessSpecialConfig : NSObject

@property (nonatomic) unsigned long long subScene;
@property (retain, nonatomic) NSDictionary *image2LiveEffectParam;
@property (copy, nonatomic) NSString *image2LiveRequestId;
@property (copy, nonatomic) NSString *image2LiveLastTaskId;
@property (copy, nonatomic) NSString *image2LiveUploadFilePath;
@property (nonatomic) BOOL image2LiveIsNetUrlNoNeedUpload;
@property (copy, nonatomic) NSString *aiEdit2ImageLastTaskId;
@property (copy, nonatomic) NSString *aiEdit2ImageTaskGroupId;
@property (copy, nonatomic) NSString *aiEditSessionID;
@property (nonatomic) BOOL aiEditNeedDeleteLastTask;
@property (nonatomic) unsigned long long postType;
@property (copy, nonatomic) NSArray *uploadVideoInfos;

- (void).cxx_destruct;

@end
