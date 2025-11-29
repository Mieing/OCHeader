@class NSData, NSString, NSArray, UIImage, NSError, NSOperationQueue, NSDictionary, NSMutableArray, NSObject, NSNumber;
@protocol ACCAIEmojiStyleModelProtocol;

@interface AWEIMAImojiGenerateContext : NSObject <AWEIMTaskPipelineContext>

@property (nonatomic) BOOL isCancelled;
@property (retain, nonatomic) NSMutableArray *helpers;
@property (retain, nonatomic) NSMutableArray *completedTasks;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long phase;
@property (copy, nonatomic) id /* block */ updateClosure;
@property (copy, nonatomic) NSString *fileDirectory;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) id<ACCAIEmojiStyleModelProtocol> artStyle;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) id detectData;
@property (copy, nonatomic) NSString *URI;
@property (nonatomic) long long taskCount;
@property (copy, nonatomic) NSArray *taskList;
@property (retain, nonatomic) NSDictionary *allTaskRawData;
@property (nonatomic) long long taskCompletedCount;
@property (retain, nonatomic) NSOperationQueue *imageRenderQueue;
@property (retain, nonatomic) NSObject *uploader;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) double startTime;
@property (nonatomic) long long renderStatus;
@property (retain, nonatomic) NSNumber *pollFirstDataTime;
@property (nonatomic) double pollDuration;
@property (nonatomic) long long imageDownloadCount;
@property (retain, nonatomic) NSNumber *imageDownloadStart;
@property (retain, nonatomic) NSNumber *imageDownloadEnd;
@property (retain, nonatomic) NSNumber *blendFirstImageTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
