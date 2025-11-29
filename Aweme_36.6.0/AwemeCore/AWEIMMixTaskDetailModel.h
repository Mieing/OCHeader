@class NSString, NSArray, IESIMURLModel;

@interface AWEIMMixTaskDetailModel : NSObject

@property (copy, nonatomic) NSString *taskID;
@property (nonatomic) long long taskStatus;
@property (copy, nonatomic) NSString *aiType;
@property (copy, nonatomic) NSArray *slotList;
@property (nonatomic) long long slotNumber;
@property (nonatomic) BOOL isMultiPortrait;
@property (nonatomic) long long roleType;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *stickerId;
@property (copy, nonatomic) NSString *stickerName;
@property (retain, nonatomic) IESIMURLModel *effectCover;
@property (copy, nonatomic) NSString *ugcStickerId;
@property (copy, nonatomic) NSString *ugcStickerName;
@property (nonatomic) long long createTime;
@property (nonatomic) long long updateTime;
@property (nonatomic) long long waitingMinutes;
@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMainTitle;
@property (copy, nonatomic) NSString *statusSubTitle;

- (void).cxx_destruct;

@end
