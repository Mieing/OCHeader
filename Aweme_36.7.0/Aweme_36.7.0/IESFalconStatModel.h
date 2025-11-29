@class NSString, NSArray;

@interface IESFalconStatModel : NSObject

@property (copy, nonatomic) NSString *resourceURLString;
@property (copy, nonatomic) NSString *offlineRule;
@property (copy, nonatomic) NSString *mimeType;
@property (nonatomic) long long offlineStatus;
@property (nonatomic) long long offlineDuration;
@property (nonatomic) long long onlineDuration;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long packageVersion;
@property (nonatomic) long long errorCode;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) long long falconDataLength;
@property (nonatomic) double readDuration;
@property (copy, nonatomic) NSArray *bundles;

- (id)statDictionary;
- (void).cxx_destruct;

@end
