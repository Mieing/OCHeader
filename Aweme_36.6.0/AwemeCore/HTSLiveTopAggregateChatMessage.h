@class HTSLiveUser, NSString, HTSLiveCommon, HTSLivePublicAreaCommon;

@interface HTSLiveTopAggregateChatMessage : IESLivePBBaseMessage

@property (nonatomic) BOOL hasTapped;
@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) HTSLivePublicAreaCommon *publicAreaCommon;
@property (nonatomic) BOOL hasPublicAreaCommon;
@property (retain, nonatomic) HTSLiveUser *user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long maxCount;

+ (id)descriptor;

@end
