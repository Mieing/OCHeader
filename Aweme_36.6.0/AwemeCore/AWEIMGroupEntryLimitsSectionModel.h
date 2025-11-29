@class NSArray, NSString;

@interface AWEIMGroupEntryLimitsSectionModel : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSArray *settingModels;
@property (copy, nonatomic) NSString *title;

+ (id)modelWithType:(unsigned long long)a0 settingModels:(id)a1;

- (void).cxx_destruct;

@end
