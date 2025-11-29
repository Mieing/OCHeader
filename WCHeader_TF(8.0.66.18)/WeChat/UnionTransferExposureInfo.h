@class NSString, UnionTransferJumpInfo;

@interface UnionTransferExposureInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *icon;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *wording;
@property (nonatomic) unsigned int isShowBtn;
@property (retain, nonatomic) NSString *btnWording;
@property (retain, nonatomic) UnionTransferJumpInfo *jumpInfo;

+ (void)initialize;

@end
