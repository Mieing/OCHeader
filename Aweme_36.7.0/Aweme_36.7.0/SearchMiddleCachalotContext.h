@class NSDictionary, NSString, NSArray;

@interface SearchMiddleCachalotContext : SearchCachalotContext

@property (copy, nonatomic) NSDictionary *lynxGlobalPropsParams;
@property (copy, nonatomic) NSDictionary *lynxRawDataParams;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSArray *methods;
@property (nonatomic) BOOL shouldUseAnnieX;
@property (nonatomic) BOOL enablePreUpdateData;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
