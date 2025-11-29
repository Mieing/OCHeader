@class NSString;

@interface GeneralJumpInfoControl_Item : WXPBGeneratedMessage

@property (nonatomic) unsigned int businessType;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *jumpUrl;

+ (void)initialize;

- (void)setJumpUrl:(id)a0;
- (id)jumpUrl;
- (void)setJumpType:(unsigned int)a0;
- (unsigned int)jumpType;
- (void)setBusinessType:(unsigned int)a0;
- (unsigned int)businessType;

@end
