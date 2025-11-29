@class NSDictionary, NSString, NSArray;

@interface IESECUniVideoPlayConfig : NSObject

@property (copy, nonatomic) NSDictionary *aweModel;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSArray *urlList;
@property (copy, nonatomic) NSDictionary *extraInfo;
@property (copy, nonatomic) NSString *playerTag;
@property (copy, nonatomic) NSString *playerSubTag;
@property (nonatomic) double callbackInterval;

- (void).cxx_destruct;

@end
