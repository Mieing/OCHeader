@class NSString, SideInfo_Playground_Card_SourceInfo;

@interface SideInfo_Playground_Card : WXPBGeneratedMessage

@property (nonatomic) int type;
@property (nonatomic) int source;
@property (retain, nonatomic) NSString *data;
@property (nonatomic) unsigned long long ms;
@property (retain, nonatomic) SideInfo_Playground_Card_SourceInfo *sourceInfo;

+ (void)initialize;

@end
