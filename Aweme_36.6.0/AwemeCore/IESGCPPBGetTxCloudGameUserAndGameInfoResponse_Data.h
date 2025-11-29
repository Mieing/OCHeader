@class NSString, NSMutableArray;

@interface IESGCPPBGetTxCloudGameUserAndGameInfoResponse_Data : GPBMessage

@property (retain, nonatomic) NSMutableArray *zoneListArray;
@property (readonly, nonatomic) unsigned long long zoneListArray_Count;
@property (nonatomic) BOOL hasGameAsset;
@property (copy, nonatomic) NSString *userNickname;
@property (copy, nonatomic) NSString *userIcon;

+ (id)descriptor;

@end
