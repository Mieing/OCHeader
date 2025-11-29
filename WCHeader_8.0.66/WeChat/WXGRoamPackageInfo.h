@class NSData;

@interface WXGRoamPackageInfo : NSObject

@property (retain, nonatomic) NSData *data;
@property (nonatomic) BOOL isLast;
@property (nonatomic) unsigned long long curOffset;

- (void).cxx_destruct;

@end
