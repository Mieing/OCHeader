@class NSString, NSArray;

@interface TPVideoInfo : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) long long videoCodecId;
@property (copy, nonatomic) NSString *downloadFileID;
@property (copy, nonatomic) NSArray *downloadParamDataArray;

+ (id)build:(id /* block */)a0;

- (void).cxx_destruct;

@end
