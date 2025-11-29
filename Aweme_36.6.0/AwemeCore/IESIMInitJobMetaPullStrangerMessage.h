@interface IESIMInitJobMetaPullStrangerMessage : IESIMJobManagerJobMetaInfo

@property (nonatomic) BOOL hasUnresolvedPulling;

- (id)init;

@end
