@class IESLiveClientUIInfo, NSMutableArray, GPBInt64ObjectDictionary;

@interface HTSLiveLinkerClientUIInfoChangeContent : IESLivePBBaseMessage

@property (nonatomic) long long uiLayout;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *linkedListUsersArray;
@property (readonly, nonatomic) unsigned long long linkedListUsersArray_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *linkerContentMap;
@property (readonly, nonatomic) unsigned long long linkerContentMap_Count;
@property (retain, nonatomic) IESLiveClientUIInfo *clientUiInfo;
@property (nonatomic) BOOL hasClientUiInfo;

+ (id)descriptor;

@end
