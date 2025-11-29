@class NSString;

@interface QOfflineItem : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *pinyin;
@property (nonatomic) long long size;
@property (nonatomic) long long status;

- (id)initWithKCOfflineItem:(id)a0;
- (void).cxx_destruct;

@end
