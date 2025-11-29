@class NSSet;

@interface AWEIMInitJobMetaUpdateServiceChatConfig : IESIMJobManagerJobMetaInfo

@property (readonly, nonatomic) NSSet *roleIdWhiteList;
@property (readonly, nonatomic) double updateMinFreqSecond;

+ (void)p_fetchServiceChatConfigGlobal:(id)a0 completion:(id /* block */)a1;

- (void)p_prepare;
- (id /* block */)jobBody;
- (void).cxx_destruct;
- (id)init;

@end
