@interface BrandProfileCreatorReporter : NSObject

@property (nonatomic) BOOL placeholderDescExposed;
@property (nonatomic) unsigned int bizUin;

+ (unsigned int)convertPublishStatus:(unsigned long long)a0;

- (id)initWithBizUin:(id)a0;
- (void)reportCreatorProfileOperation:(unsigned int)a0 viewModel:(id)a1;
- (void)reportCreatorProfileOperation:(unsigned int)a0 msgId:(unsigned int)a1 idx:(unsigned int)a2 publishStatus:(unsigned int)a3;
- (BOOL)shouldReport:(unsigned int)a0;

@end
