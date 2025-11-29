@class NSString, NSArray;

@interface MMWebPrefetchPkgResInfo : MMObject

@property (copy, nonatomic) NSString *htmlTag;
@property (copy, nonatomic) NSString *pathInPkg;
@property (retain, nonatomic) NSArray *arrAttr;

- (void).cxx_destruct;

@end
