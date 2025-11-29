@class NSString, NSData, NSDictionary;

@interface HMDNetworkUploadModel : NSObject

@property (copy, nonatomic) NSString *uploadURL;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *headerField;
@property (nonatomic) BOOL isManualTriggered;

- (void).cxx_destruct;

@end
