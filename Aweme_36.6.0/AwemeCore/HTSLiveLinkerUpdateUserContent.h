@class IESLiveClientUIInfo, NSString, NSMutableDictionary, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveLinkerUpdateUserContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *fromUserId;
@property (copy, nonatomic) NSString *toUserId;
@property (retain, nonatomic) NSMutableDictionary *updateInfo;
@property (readonly, nonatomic) unsigned long long updateInfo_Count;
@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (copy, nonatomic) NSString *ackMessage;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
