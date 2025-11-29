@class NSString, NSDictionary;

@interface AWEIMMixPhotoCommonJobResult : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL submitSuccess;
@property (copy, nonatomic) NSString *clientMessageID;
@property (nonatomic) unsigned long long serverMessageID;
@property (nonatomic) unsigned long long playID;
@property (copy, nonatomic) NSString *converstionID;
@property (nonatomic) int currentJoinCount;
@property (copy, nonatomic) NSDictionary *rspTrackExt;
@property (nonatomic) BOOL shouldShowNewMixPage;

+ (id)newResultWithRequestType:(long long)a0;

- (void).cxx_destruct;

@end
