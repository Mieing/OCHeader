@class NSString;

@interface AWEHPTabGuideComponentInfo : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *tabID;
@property (copy, nonatomic) NSString *componentID;
@property (copy, nonatomic) NSString *clientExtra;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;

- (void).cxx_destruct;
- (id)description;

@end
