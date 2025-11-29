@class NSString, NSArray;

@interface ALMVideoModel : NSObject

@property (copy, nonatomic) NSString *videoID;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSArray *urlList;
@property (nonatomic) unsigned long long playerType;
@property (copy, nonatomic) NSString *dashModelString;
@property (copy, nonatomic) NSString *fileCs;
@property (copy, nonatomic) NSString *pToken;
@property (copy, nonatomic) NSString *playAuth;
@property (copy, nonatomic) NSArray *hosts;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL isH265;

- (void).cxx_destruct;

@end
