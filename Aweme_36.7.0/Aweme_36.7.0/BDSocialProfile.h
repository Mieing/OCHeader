@class NSString, NSURL;

@interface BDSocialProfile : NSObject

@property (nonatomic) unsigned long long socialNetwork;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSString *userIdentifier;
@property (retain, nonatomic) NSURL *url;

- (void).cxx_destruct;

@end
