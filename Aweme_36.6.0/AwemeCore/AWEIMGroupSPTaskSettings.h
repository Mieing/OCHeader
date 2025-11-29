@class NSArray, NSString;

@interface AWEIMGroupSPTaskSettings : NSObject

@property (readonly, copy, nonatomic) NSArray *interceptNoTaskTypes;
@property (readonly, copy, nonatomic) NSArray *interceptOfflineTaskTypes;
@property (readonly, copy, nonatomic) NSString *interceptTip;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
