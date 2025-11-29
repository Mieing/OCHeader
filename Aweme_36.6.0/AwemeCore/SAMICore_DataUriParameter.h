@class NSArray, NSString;

@interface SAMICore_DataUriParameter : NSObject

@property (nonatomic) long long uriType;
@property (retain, nonatomic) NSArray *uris;
@property (retain, nonatomic) NSString *authPolicy;
@property (retain, nonatomic) NSString *authPolicyHeader;

@end
