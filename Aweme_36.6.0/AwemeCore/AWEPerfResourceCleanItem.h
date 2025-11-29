@class NSString, NSDate;

@interface AWEPerfResourceCleanItem : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) unsigned long long size;
@property (retain, nonatomic) NSDate *lastAccessDate;
@property (retain, nonatomic) NSDate *creationDate;

- (void).cxx_destruct;

@end
