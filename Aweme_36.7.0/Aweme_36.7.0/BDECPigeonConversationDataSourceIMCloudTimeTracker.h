@class NSString, NSArray;

@interface BDECPigeonConversationDataSourceIMCloudTimeTracker : NSObject

@property (nonatomic) long long notifyTime;
@property (nonatomic) BOOL willTrack;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSArray *converstionIds;

- (void).cxx_destruct;

@end
