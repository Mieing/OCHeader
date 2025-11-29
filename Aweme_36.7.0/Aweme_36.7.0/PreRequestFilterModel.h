@class NSString, NSDictionary, NSMutableDictionary;

@interface PreRequestFilterModel : NSObject

@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) id params;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) id /* block */ bodyBlock;
@property (copy, nonatomic) NSDictionary *headerField;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (retain, nonatomic) NSMutableDictionary *filterTimingInfo;

- (void).cxx_destruct;

@end
