@class NSString, NSNumber;

@interface AWESearchVideoKeySegmentModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *desc;
@property (nonatomic) unsigned long long displayStyle;
@property (retain, nonatomic) NSNumber *keySegmentTime;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *icon;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
