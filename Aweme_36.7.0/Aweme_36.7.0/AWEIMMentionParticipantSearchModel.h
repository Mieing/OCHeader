@class AWEIMUserViewModel, NSString, UIImage;

@interface AWEIMMentionParticipantSearchModel : NSObject

@property (nonatomic) unsigned long long modelType;
@property (retain, nonatomic) AWEIMUserViewModel *userViewModel;
@property (nonatomic) BOOL botEnable;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *sortName;
@property (copy, nonatomic) NSString *sortFirstLetter;

+ (id)modelWithAiCloneViewModel:(id)a0 botEnable:(BOOL)a1;
+ (id)modelWithBotUserViewModel:(id)a0;
+ (id)inviteBotsModel;
+ (id)modelWithUserViewModel:(id)a0;
+ (id)atAllModel;

- (void).cxx_destruct;

@end
