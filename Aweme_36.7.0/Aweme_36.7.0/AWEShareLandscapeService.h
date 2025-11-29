@class NSDictionary, NSString, AWEAwemeModel;

@interface AWEShareLandscapeService : AWEShareCommonImpl <AWEShareLandscape>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unexpectedShareTypesWithContext:(id)a0;
+ (id)shareTypesForLandscape;

@end
