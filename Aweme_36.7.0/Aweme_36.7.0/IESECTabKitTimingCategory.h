@class NSString, NSDictionary;

@interface IESECTabKitTimingCategory : NSObject

@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *entranceLocation;
@property (nonatomic) unsigned long long pageModal;
@property (copy, nonatomic) NSDictionary *bizCustomCategory;
@property (nonatomic) unsigned long long bizMode;
@property (nonatomic) long long enablePreProcessAnnie;
@property (nonatomic) long long enableAnnieWebCache;

- (id)toDic;
- (void).cxx_destruct;

@end
