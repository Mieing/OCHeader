@class NSString, NSMutableArray;

@interface HTSLiveAnnounceInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) int state;
@property (nonatomic) int showState;
@property (nonatomic) long long announceId;
@property (nonatomic) long long updatedTime;
@property (copy, nonatomic) NSString *announceSnapshotId;
@property (retain, nonatomic) NSMutableArray *imageListArray;
@property (readonly, nonatomic) unsigned long long imageListArray_Count;
@property (copy, nonatomic) NSString *auditReason;
@property (retain, nonatomic) NSMutableArray *imageListThumbArray;
@property (readonly, nonatomic) unsigned long long imageListThumbArray_Count;

+ (id)descriptor;

@end
