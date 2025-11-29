@class NSArray;

@interface VEAIMomentTemplateInfo : NSObject

@property (nonatomic) long long templateId;
@property (nonatomic) long long source;
@property (retain, nonatomic) NSArray *segInfos;

- (void).cxx_destruct;

@end
