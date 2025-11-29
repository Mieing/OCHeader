@class NSURL, NSString, ACCAIGCRecordModel;

@interface ACCAIGCPhotoWallModel : NSObject

@property (nonatomic) BOOL isHistory;
@property (retain, nonatomic) NSURL *imageURL;
@property (nonatomic) long long taskIndex;
@property (retain, nonatomic) NSString *taskID;
@property (retain, nonatomic) NSString *fromTaskID;
@property (retain, nonatomic) ACCAIGCRecordModel *recordModel;

- (void).cxx_destruct;

@end
