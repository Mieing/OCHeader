@class NSString;

@interface PersonalDesigner : WXPBGeneratedMessage

@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *headUrl;
@property (retain, nonatomic) NSString *finderUserName;
@property (retain, nonatomic) NSString *designerDescription;
@property (retain, nonatomic) NSString *finderHeadimgUrl;
@property (retain, nonatomic) NSString *finderNickname;

+ (id)genFromXMLStr:(id)a0;
+ (BOOL)containseFinderUserNameForXMLStr:(id)a0;
+ (id)getOldRedireUrlFromXMLStr:(id)a0;
+ (void)initialize;

- (void)setFinderNickname:(id)a0;
- (id)finderNickname;
- (void)setFinderHeadimgUrl:(id)a0;
- (id)finderHeadimgUrl;
- (void)setDesignerDescription:(id)a0;
- (id)designerDescription;
- (void)setFinderUserName:(id)a0;
- (id)finderUserName;
- (void)setHeadUrl:(id)a0;
- (id)headUrl;
- (void)setName:(id)a0;
- (id)name;
- (void)setDesignerUin:(unsigned int)a0;
- (unsigned int)designerUin;
- (BOOL)isNativeInfoValid;
- (BOOL)isFinderInfoValid;
- (BOOL)isValid;
- (id)strDesignerUin;
- (BOOL)shouldUpdateWith:(id)a0;
- (id)displayName;
- (id)displayIconUrl;
- (id)debugDescription;

@end
