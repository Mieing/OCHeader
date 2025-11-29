@class NSString;

@interface LinkedinContactItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *linkedinName;
@property (retain, nonatomic) NSString *linkedinMemberId;
@property (retain, nonatomic) NSString *linkedinPublicUrl;

+ (void)initialize;

- (void)setLinkedinPublicUrl:(id)a0;
- (id)linkedinPublicUrl;
- (void)setLinkedinMemberId:(id)a0;
- (id)linkedinMemberId;
- (void)setLinkedinName:(id)a0;
- (id)linkedinName;

@end
