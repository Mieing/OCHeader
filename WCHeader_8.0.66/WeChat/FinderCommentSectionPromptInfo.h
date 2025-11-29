@class NSString, FinderJumpInfo;

@interface FinderCommentSectionPromptInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *enableCommentAffirmText;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
