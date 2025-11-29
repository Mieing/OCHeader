@class NSArray, NSString, ToygerRect;

@interface ToygerFaceInfo : ToygerBaseModel

@property (copy, nonatomic) ToygerRect *rect;
@property (copy, nonatomic) NSArray *points;
@property (copy, nonatomic) NSString *confidence;
@property (copy, nonatomic) NSString *quality;
@property (copy, nonatomic) NSString *feature;
@property (copy, nonatomic) NSString *feaVersion;

- (void).cxx_destruct;
- (id)init;

@end
