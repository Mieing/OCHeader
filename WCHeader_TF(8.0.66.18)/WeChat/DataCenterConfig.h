@class NSString;

@interface DataCenterConfig : WXPBGeneratedMessage

@property (nonatomic) BOOL enable;
@property (nonatomic) unsigned int portType;
@property (retain, nonatomic) NSString *webUrl;
@property (retain, nonatomic) NSString *miniappUsername;
@property (retain, nonatomic) NSString *miniappPath;
@property (retain, nonatomic) NSString *title;

+ (void)initialize;

- (void)setTitle:(id)a0;
- (id)title;
- (void)setMiniappPath:(id)a0;
- (id)miniappPath;
- (void)setMiniappUsername:(id)a0;
- (id)miniappUsername;
- (void)setWebUrl:(id)a0;
- (id)webUrl;
- (void)setPortType:(unsigned int)a0;
- (unsigned int)portType;
- (void)setEnable:(BOOL)a0;
- (BOOL)enable;

@end
