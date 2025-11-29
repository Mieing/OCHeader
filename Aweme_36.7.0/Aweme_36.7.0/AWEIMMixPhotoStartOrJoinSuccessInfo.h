@class NSString, NSDictionary;

@interface AWEIMMixPhotoStartOrJoinSuccessInfo : NSObject

@property (nonatomic) long long type;
@property (nonatomic) int currentJoinCount;
@property (nonatomic) long long playID;
@property (copy, nonatomic) NSString *conversationID;
@property (copy, nonatomic) NSString *clientMessageID;
@property (copy, nonatomic) NSDictionary *rspTrackExt;
@property (copy, nonatomic) NSString *taskID;

- (void).cxx_destruct;

@end
