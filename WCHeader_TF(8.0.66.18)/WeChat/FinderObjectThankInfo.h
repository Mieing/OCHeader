@class NSString;

@interface FinderObjectThankInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *sharerNickname;
@property (nonatomic) unsigned int thankFlag;
@property (nonatomic) unsigned int gender;

+ (void)initialize;

- (void)setGender:(unsigned int)a0;
- (unsigned int)gender;
- (void)setThankFlag:(unsigned int)a0;
- (unsigned int)thankFlag;
- (void)setSharerNickname:(id)a0;
- (id)sharerNickname;

@end
