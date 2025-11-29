@class NSString;

@interface KCOfflineItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pinyin;
@property (nonatomic) long long size;
@property (nonatomic) long long status;

- (void).cxx_destruct;

@end
