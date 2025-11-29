@class NSString, NSData;

@interface MAMapResourceLoaderResponse : NSObject

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *failMessage;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL preAlpha;
@property (nonatomic) double imgWidth;
@property (nonatomic) double imgHeight;
@property (nonatomic) double imgScale;

- (void).cxx_destruct;

@end
