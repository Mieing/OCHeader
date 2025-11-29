@class IESLiveClientUIInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveLinkerLinkedListChangeContent : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *linkedUsersArray;
@property (readonly, nonatomic) unsigned long long linkedUsersArray_Count;
@property (retain, nonatomic) NSMutableArray *preLinkUsersArray;
@property (readonly, nonatomic) unsigned long long preLinkUsersArray_Count;
@property (nonatomic) unsigned long long version;
@property (nonatomic) int pushType;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (nonatomic) int updateMode;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
