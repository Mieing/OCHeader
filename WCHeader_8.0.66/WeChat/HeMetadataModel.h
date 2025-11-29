@class NSString;

@interface HeMetadataModel : NSObject

@property (nonatomic) long long Version;
@property (copy, nonatomic) NSString *Created;
@property (copy, nonatomic) NSString *Description;

- (void).cxx_destruct;

@end
