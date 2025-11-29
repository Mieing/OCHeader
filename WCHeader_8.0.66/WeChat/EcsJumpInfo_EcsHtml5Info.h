@class NSString, EcsJumpInfo_EcsHtml5Info_HalfPageConfig;

@interface EcsJumpInfo_EcsHtml5Info : WXPBGeneratedMessage

@property (readonly, nonatomic) NSString *jumpId;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL brandEnableFastLoad;
@property (nonatomic) unsigned int brandItemShowType;
@property (nonatomic) BOOL isHalfPage;
@property (retain, nonatomic) EcsJumpInfo_EcsHtml5Info_HalfPageConfig *halfPageConfig;

+ (void)initialize;

@end
