@class NSMutableDictionary, NSString, NSArray, NSDate, NSMutableArray;

@interface IESGurdMultiAccessKeysRequest : NSObject

@property (retain, nonatomic) NSMutableArray *accessKeysArray;
@property (retain, nonatomic) NSMutableDictionary *targetChannelsDictionary;
@property (retain, nonatomic) NSMutableDictionary *groupNamesDictionary;
@property (retain, nonatomic) NSMutableDictionary *customParamsDictionary;
@property (retain, nonatomic) NSDate *createTime;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long modelActivePolicy;
@property (nonatomic) BOOL retryDownload;
@property (nonatomic) long long requestType;
@property (nonatomic) int syncTaskId;
@property (nonatomic) long long lazyDownloadPriority;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ updateCallback;
@property (copy, nonatomic) NSString *originalUpdateAccessKey;
@property (copy, nonatomic) NSArray *originalUpdateChannels;

- (id)getLocalInfos;
- (id)paramsForRequest;
- (BOOL)isParamsValid;
- (void)updateConfigWithParams:(id)a0;
- (void)addAccessKey:(id)a0 channels:(id)a1;
- (void)addAccessKey:(id)a0 customParams:(id)a1;
- (void)addAccessKey:(id)a0 groupName:(id)a1;
- (id)targetChannelInfosArrayWithAccessKey:(id)a0;
- (id)groupNameInfosArrayWithAccessKey:(id)a0;
- (void)updateConfigWithUpdateParams:(id)a0;
- (id)targetChannelsMap;
- (id)targetGroupsMap;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
