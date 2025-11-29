@class NSString, FinderJumpInfo, FinderLiveGiftMethod;

@interface FinderLiveGiftMethodItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int itemId;
@property (retain, nonatomic) FinderLiveGiftMethod *method;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *statusWording;
@property (retain, nonatomic) FinderJumpInfo *orderJumpInfo;

+ (void)initialize;

@end
