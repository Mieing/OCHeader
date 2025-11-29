@class NSArray, NSString;

@interface IESGurdResourceURLInfo : NSObject

@property (nonatomic) unsigned long long ID;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *decompressMD5;
@property (nonatomic) unsigned long long packageSize;

+ (id)instanceWithDict:(id)a0;

- (void).cxx_destruct;

@end
