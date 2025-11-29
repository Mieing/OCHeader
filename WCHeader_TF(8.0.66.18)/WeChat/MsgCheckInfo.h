@class NSString;

@interface MsgCheckInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int msgCheckSec;
@property (retain, nonatomic) NSString *msgCheckStr;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (void)initialize;

@end
