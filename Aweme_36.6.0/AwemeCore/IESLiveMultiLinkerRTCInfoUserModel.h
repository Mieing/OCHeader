@class NSNumber, NSString;

@interface IESLiveMultiLinkerRTCInfoUserModel : NSObject

@property (nonatomic) BOOL isAdvancePushStream;
@property (nonatomic) BOOL isBusinessPrepare;
@property (nonatomic) BOOL didUpdate;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *mixUID;

- (void).cxx_destruct;

@end
