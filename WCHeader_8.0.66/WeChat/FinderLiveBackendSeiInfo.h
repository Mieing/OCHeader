@class FinderLiveBackendSeiInfo_LayoutInfo;

@interface FinderLiveBackendSeiInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long beginTimeMs;
@property (nonatomic) unsigned long long endTimeMs;
@property (retain, nonatomic) FinderLiveBackendSeiInfo_LayoutInfo *selfRoomLayoutInfo;

+ (void)initialize;

@end
