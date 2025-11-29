@class FinderLiveStreamPlayTogetherActiveMsgInfo, FinderLiveStreamPlayTogetherTypeInfo, FinderLiveStreamPlayTogetherInteractiveTagInfo;

@interface FinderLiveStreamPlayTogetherInfo : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (retain, nonatomic) FinderLiveStreamPlayTogetherTypeInfo *typeInfo;
@property (retain, nonatomic) FinderLiveStreamPlayTogetherInteractiveTagInfo *tagInfo;
@property (retain, nonatomic) FinderLiveStreamPlayTogetherActiveMsgInfo *activeMsgInfo;

+ (void)initialize;

@end
