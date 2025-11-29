@class NSString;

@interface Backtrace : GPBMessage

@property (nonatomic) long long address;
@property (nonatomic) BOOL hasAddress;
@property (copy, nonatomic) NSString *imageName;
@property (nonatomic) BOOL hasImageName;

+ (id)descriptor;

@end
