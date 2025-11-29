@class NSString, NSMutableArray;

@interface HTSLiveRelaxPreviewDetail : IESLivePBBaseMessage

@property (nonatomic) long long releaseTime;
@property (nonatomic) long long scheduledTime;
@property (copy, nonatomic) NSString *videoTitle;
@property (retain, nonatomic) NSMutableArray *coverUrlsArray;
@property (readonly, nonatomic) unsigned long long coverUrlsArray_Count;
@property (nonatomic) long long playNumber;
@property (nonatomic) long long itemId;
@property (copy, nonatomic) NSString *itemIdStr;
@property (nonatomic) long long id_p;
@property (copy, nonatomic) NSString *idStr;
@property (nonatomic) long long subscribeCount;
@property (retain, nonatomic) NSMutableArray *subscribeUserAvatarArray;
@property (readonly, nonatomic) unsigned long long subscribeUserAvatarArray_Count;

+ (id)descriptor;

@end
