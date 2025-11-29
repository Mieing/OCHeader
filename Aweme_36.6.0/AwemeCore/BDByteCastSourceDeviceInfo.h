@class NSString, NSArray;

@interface BDByteCastSourceDeviceInfo : BDByteCastDeviceInfo

@property (copy, nonatomic) NSString *browseId;
@property (copy, nonatomic) NSArray *codecsDetection;
@property (copy, nonatomic) NSString *clientId;

- (void).cxx_destruct;
- (id)dictionary;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end
