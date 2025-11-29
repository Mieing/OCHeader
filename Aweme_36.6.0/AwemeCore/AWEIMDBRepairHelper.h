@class NSString;

@interface AWEIMDBRepairHelper : HTSService <AWEIMDBRepairHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clearBatchUpdateDBConvVersion;

@end
