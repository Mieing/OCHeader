@class NSString, NSMutableArray;

@interface HTSLiveLinkerAnchorStreamSwitchContent : IESLivePBBaseMessage

@property (nonatomic) BOOL useBackupStream;
@property (copy, nonatomic) NSString *anchorUserId;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (nonatomic) unsigned long long version;

+ (id)descriptor;

@end
