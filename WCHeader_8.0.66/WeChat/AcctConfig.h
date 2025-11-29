@class NSString;

@interface AcctConfig : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *miniappUsername;
@property (retain, nonatomic) NSString *miniappPath;
@property (retain, nonatomic) NSString *cellName;
@property (nonatomic) unsigned int actionType;
@property (retain, nonatomic) NSString *webUrl;
@property (nonatomic) unsigned int miniappScene;
@property (retain, nonatomic) NSString *cellDetail;

+ (void)initialize;

- (void)setCellDetail:(id)a0;
- (id)cellDetail;
- (void)setMiniappScene:(unsigned int)a0;
- (unsigned int)miniappScene;
- (void)setWebUrl:(id)a0;
- (id)webUrl;
- (void)setActionType:(unsigned int)a0;
- (unsigned int)actionType;
- (void)setCellName:(id)a0;
- (id)cellName;
- (void)setMiniappPath:(id)a0;
- (id)miniappPath;
- (void)setMiniappUsername:(id)a0;
- (id)miniappUsername;

@end
