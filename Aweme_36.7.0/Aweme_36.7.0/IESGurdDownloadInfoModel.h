@class NSString, NSArray;

@interface IESGurdDownloadInfoModel : NSObject

@property (copy, nonatomic) NSString *identity;
@property (copy, nonatomic) NSString *currentDownloadURLString;
@property (copy, nonatomic) NSArray *allDownloadURLStrings;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *packageSort;
@property (nonatomic) long long packageType;
@property (nonatomic) unsigned long long packageVersion;
@property (nonatomic) unsigned long long packageSize;

- (void).cxx_destruct;

@end
