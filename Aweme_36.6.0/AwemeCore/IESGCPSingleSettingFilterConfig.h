@class NSArray;

@interface IESGCPSingleSettingFilterConfig : NSObject

@property (copy, nonatomic) NSArray *rules;
@property (retain, nonatomic) id filterValue;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
