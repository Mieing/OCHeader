@class NSString, NSNumber, NSArray;

@interface ToygerUploadConfig : ToygerBaseModel

@property (copy, nonatomic) NSString *minquality;
@property (copy, nonatomic) NSString *upload_compress_rate;
@property (copy, nonatomic) NSString *mode;
@property (retain, nonatomic) NSNumber *desiredWidth;
@property (copy, nonatomic) NSString *log_classifier;
@property (copy, nonatomic) NSArray *collection;

- (void).cxx_destruct;
- (id)init;

@end
