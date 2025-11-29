@class NSDictionary;

@interface TXCScreenCaptureSourceInfo : NSObject

@property (nonatomic) BOOL sharesScreen;
@property (nonatomic) long long sourceId;
@property (copy, nonatomic) NSDictionary *extInfo;

- (void).cxx_destruct;

@end
