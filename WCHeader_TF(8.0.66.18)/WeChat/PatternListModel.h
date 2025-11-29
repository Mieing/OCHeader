@class NSArray;

@interface PatternListModel : NSObject

@property (nonatomic) long long AbsoluteTime;
@property (copy, nonatomic) NSArray *Pattern;

+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
