@class NSString;

@interface AWEIMMixPhotoMessageUpdatedModel : NSObject

@property (copy, nonatomic) NSString *clientMessageID;
@property (nonatomic) long long type;
@property (nonatomic) long long participateCount;
@property (nonatomic) double clientReceiveMsgUpdatedTime;
@property (nonatomic) BOOL isMixPhotoComplete;

- (void).cxx_destruct;

@end
