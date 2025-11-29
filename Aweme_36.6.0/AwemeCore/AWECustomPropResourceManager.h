@class NSMutableArray;

@interface AWECustomPropResourceManager : NSObject

@property (copy, nonatomic) id /* block */ customPropExportInfoUpdateBlock;
@property (retain, nonatomic) NSMutableArray *exportResources;

+ (void)notifiCustomPropResourceUpdateWithPackageURS:(id)a0 iconURS:(id)a1 exportTaskId:(id)a2;
+ (void)observeCustomPropResourceUpdateCallback:(id /* block */)a0;
+ (void)clear;
+ (id)shareInstance;

- (void).cxx_destruct;

@end
