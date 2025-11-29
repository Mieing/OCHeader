@class NSString;

@interface IESArtistStcikerCommonRequestModel : NSObject

@property (copy, nonatomic) NSString *host;
@property (nonatomic) unsigned long long cursor;
@property (nonatomic) unsigned long long pageCount;
@property (nonatomic) BOOL shouldCache;

- (void).cxx_destruct;

@end
