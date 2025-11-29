@class NSString, NSError;

@interface WCFinderLongServiceEncodeCompletionParam : NSObject

@property (copy, nonatomic) NSString *path;
@property (nonatomic) BOOL isSkipEncode;
@property (nonatomic) BOOL isCancel;
@property (nonatomic) double timeDiff;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long retryType;

- (void).cxx_destruct;

@end
