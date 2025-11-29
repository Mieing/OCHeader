@class NSString, NSDictionary, NSPredicate;

@interface IESLiveFullLinkSettingsMatchItem : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSPredicate *predicate;

- (BOOL)isMatch:(id)a0;
- (void).cxx_destruct;

@end
