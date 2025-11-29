@interface IESIMJobManagerInnerDataHost : IESIMJobManagerBaseDataHost

+ (id)sharedInstance;

- (BOOL)flushToManager:(id)a0;
- (id)taskMetaInfoListWithManager:(id)a0;
- (id)fetcherListWithManager:(id)a0;

@end
