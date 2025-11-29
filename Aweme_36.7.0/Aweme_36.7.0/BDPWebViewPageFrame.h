@class NSString, NSData, NSDate;

@interface BDPWebViewPageFrame : NSObject

@property (copy, nonatomic) NSString *pkgName;
@property (retain, nonatomic) NSData *jsData;
@property (retain, nonatomic) NSDate *loadBegin;
@property (retain, nonatomic) NSDate *loadEnd;
@property (retain, nonatomic) NSDate *evalBegin;
@property (retain, nonatomic) NSDate *evalEnd;

- (void).cxx_destruct;

@end
