@class IESLiveLinkerBaseInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface IESLiveInteractUserListData : NSObject

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (retain, nonatomic) NSMutableArray *lockedPositionsArray;
@property (retain, nonatomic) NSMutableArray *positionsArray;
@property (retain, nonatomic) IESLiveLinkerBaseInfo *linkerBaseInfo;

- (id)initWithListV2Response:(id)a0;
- (id)initWithSyncData:(id)a0;
- (void)fixUserDataForWrds;
- (void).cxx_destruct;

@end
