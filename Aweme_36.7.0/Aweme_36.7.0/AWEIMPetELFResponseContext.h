@class NSString, NSArray;

@interface AWEIMPetELFResponseContext : NSObject

@property (nonatomic) long long statusCode;
@property (nonatomic) unsigned long long stickerType;
@property (nonatomic) long long renderStatus;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *iconURL;
@property (copy, nonatomic) NSArray *stickers;

- (void).cxx_destruct;

@end
