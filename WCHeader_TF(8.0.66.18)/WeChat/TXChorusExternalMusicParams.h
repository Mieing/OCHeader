@class NSString;

@interface TXChorusExternalMusicParams : NSObject

@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *musicUrl;
@property (copy, nonatomic) NSString *accompanyUrl;
@property (nonatomic) long long isEncrypted;
@property (nonatomic) long long encryptBlockLength;

- (void).cxx_destruct;

@end
