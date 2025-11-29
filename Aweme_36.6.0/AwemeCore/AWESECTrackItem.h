@class NSString, NSDictionary;

@interface AWESECTrackItem : NSObject

@property (copy, nonatomic) NSString *eventName;
@property (readonly, copy, nonatomic) NSDictionary *allParams;
@property (copy, nonatomic) NSDictionary *category;
@property (copy, nonatomic) NSDictionary *metrics;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) unsigned long long trackerType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;

- (void).cxx_destruct;
- (id)init;

@end
