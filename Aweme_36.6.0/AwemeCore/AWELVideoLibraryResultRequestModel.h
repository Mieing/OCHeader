@class NSString;

@interface AWELVideoLibraryResultRequestModel : NSObject

@property (copy, nonatomic) NSString *searchKey;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long miniappOffset;

- (void).cxx_destruct;

@end
