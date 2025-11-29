@class NSString, HTSLiveCommon, NSMutableArray;

@interface HTSLiveTogetherLiveChangeMemberMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) long long isTogetherLive;
@property (retain, nonatomic) NSMutableArray *userListArray;
@property (readonly, nonatomic) unsigned long long userListArray_Count;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) long long scene;

+ (id)descriptor;

@end
