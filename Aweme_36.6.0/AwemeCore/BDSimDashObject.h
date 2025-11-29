@class NSString, NSNumber, NSArray;

@interface BDSimDashObject : NSObject

@property (copy, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSString *meta;
@property (copy, nonatomic) NSArray *audioBSModels;
@property (copy, nonatomic) NSArray *videoBSModels;

- (void).cxx_destruct;

@end
