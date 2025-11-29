@class NSString, NSDictionary, NSObject;

@interface IESFeatureInputData : NSObject <NSCopying>

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *modelID;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSObject *model;
@property (copy, nonatomic) NSDictionary *importantFeatures;
@property (nonatomic) unsigned long long uploadType;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
